#include "monty.h"
/**
 * free_stack - function to free stack
*/
void free_stack(void)
{
	stack_t *current = arguments.bottom;
	stack_t *nextNode;

	/* Traverse the list and free each node*/
	while (current != NULL)
	{/*Save the next node before freeing the current one */
		nextNode = current->next;
		free(current);
		current = nextNode;  /*Move to the next node*/
	}
}
