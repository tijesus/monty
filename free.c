#include "monty.h"
/**
* _free- frees the linked list
* @head: head of the stack
*/
void _free(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}