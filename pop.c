#include "monty.h"

void pop_error(void)
{
	dprintf(2, "L%d: can't pop an empty stack\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

void pop(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (*stack == NULL)
		pop_error();

	if ((*stack)->prev != NULL)
	{
		*stack = (*stack)->prev;
		free((*stack)->next);
		(*stack)->next = NULL;
	}
	else
	{

		free(*stack);
		*stack = NULL;
		arguments.top = NULL;
		arguments.bottom = NULL;
	}
	arguments.stack_length--;
}
