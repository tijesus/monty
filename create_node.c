#include "monty.h"
/**
 * push_error - function to handle push error
*/
void push_error(void)
{
	dprintf(2, "L%d: usage: push integer\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}

/**
 * create_node - functin that creates node
 * Return: the created node
*/
stack_t *create_node(void)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		free_token_array();
		free_stack();
		malloc_error();
	}
	if (arguments.token_array[1] == NULL ||
		(atoi(arguments.token_array[1]) == 0
		  && arguments.token_array[1][0] != '0'))
	{
		free(node);
		push_error();
	}

	node->n = atoi(arguments.token_array[1]);
	node->next = node->prev = NULL;
	return (node);
}
