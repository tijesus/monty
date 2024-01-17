#include "monty.h"
/**
 * _pall - print all
 * @head: pointer to head pointer
 * @n: number passed
 * Return: 0 on success
*/
void _pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}