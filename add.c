#include "monty.h"
/**
 * add_error - function to add error
*/
void add_error(void)
{
	dprintf(2, "L%d: can't add, stack too short\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * add - function to add top two stack or node
 * @stack: pointer to stack pointer
 * @line_number: lines found in the file
*/
void add(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (arguments.stack_length < 2)
		add_error();
	(*stack)->prev->n += (*stack)->n;
	*stack = (*stack)->prev;
	free((*stack)->next);
	(*stack)->next = NULL;
	arguments.stack_length--;
}
