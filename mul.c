#include "monty.h"

/**
 * mul_error - write error message to stderr
*/
void mul_error(void)
{
	dprintf(2, "L%d: can't mul, stack too short\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * mul- multiplies the second top element of the stack
 *  with the top element of the stack
 * @stack: pointer to stack pointer
 * @line_number: lines found in the file
*/
void mul(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (arguments.stack_length < 2)
		mul_error();
	(*stack)->prev->n *= (*stack)->n;
	*stack = (*stack)->prev;
	free((*stack)->next);
	(*stack)->next = NULL;
	arguments.stack_length--;
}
