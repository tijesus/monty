#include "monty.h"
/**
 * push - push to the top of the node or stack
 * @stack: pointer to stack pointer
 * @line_number: line of in the file
*/
void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *node;

	node = create_node();
	if (arguments.stack_length == 0) /*in the case that the stack has no nodes*/
	{
		*stack = node;
		arguments.bottom = node;
	}
	else
	{
		node->prev = *stack;
		(*stack)->next = node;
		*stack = node; /*updating the top pointer*/
	}
	arguments.stack_length++;
}
