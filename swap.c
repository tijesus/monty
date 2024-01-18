#include "monty.h"

/**
 * swap_error - error encounered while swapping
*/
void swap_error(void)
{
	dprintf(2, "L%d: can't swap, stack too short\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}
/**
 * swap - error encounered while swapping
 * @stack: pointer to stack pointer
 * @line_number: line found in the file
*/
void swap(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *_top;
	stack_t *_behind_top;

	if (arguments.stack_length < 2)
		swap_error();

	_top = *stack;
	_behind_top = (*stack)->prev;

	if (arguments.stack_length == 2)
	{
		arguments.bottom = _top;
		*stack = _behind_top;
		_top->prev = NULL;
		_top->next = _behind_top;
		_behind_top->prev = _top;
		_behind_top->next = NULL;
	}
	else
	{
		*stack = _behind_top;
		_top->prev = _behind_top->prev;
		_top->next = _behind_top;
		_behind_top->prev->next = _top;
		_behind_top->prev = _top;
		_behind_top->next = NULL;
	}
}
