#include "monty.h"

/**
 * div_error - write error message to stderr
*/
void div_error(void)
{
	dprintf(2, "L%d: can't div, stack too short\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * div_ - divides the second top element of the stack by the top element
 * @stack: pointer to stack pointer
 * @line_number: lines found in the file
*/
void div_(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (arguments.stack_length < 2)
		div_error();
	if ((*stack)->n == 0)
		division_by_zero_error();
	(*stack)->prev->n /= (*stack)->n;
	*stack = (*stack)->prev;
	free((*stack)->next);
	(*stack)->next = NULL;
	arguments.stack_length--;
}
