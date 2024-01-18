#include "monty.h"
/**
 * free_token_array - function to free token
*/
void free_token_array(void)
{
	int i = 0;

	while (arguments.token_array[i] != NULL)
	{
		free(arguments.token_array[i]);
		i++;
	}
	arguments.token_array[0] = NULL;
}
