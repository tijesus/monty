#include "monty.h"

void pint_error(void)
{
	dprintf(2, "L%d: can't pint, stack empty\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

void pint(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	if (arguments.top == NULL)
		pint_error();
	printf("%d\n", (*stack)->n);
}
