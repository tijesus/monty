#include "monty.h"

/**
 * sub_error - write error message to stderr
*/
void sub_error(void)
{
	dprintf(2, "L%d: can't sub, stack too short\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * sub - function to subtract top node from previous node
 * @stack: pointer to stack pointer
 * @line_number: lines found in the file
*/
void sub(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (arguments.stack_length < 2)
		sub_error();
	(*stack)->prev->n -= (*stack)->n;
	*stack = (*stack)->prev;
	free((*stack)->next);
	(*stack)->next = NULL;
	arguments.stack_length--;
}
