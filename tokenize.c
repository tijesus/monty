#include "monty.h"
/**
 * tokenize - function to tokenize file
*/
void tokenize(void)
{
	char line_dup[MAX];
	char *delim = " \n";
	char *token;
	char *buffer;
	int i = 0;

	arguments.token_array[0] = NULL;
	strcpy(line_dup, arguments.line);

	token = strtok(line_dup, delim);

	while (token)
	{
		buffer = malloc(strlen(token) * sizeof(char) + 1);
		if (buffer == NULL)
		{
			free_token_array();
			malloc_error();
		}
		fill_token_array(buffer, token);
		arguments.token_array[i] = buffer;
		token = strtok(NULL, delim);
		i++;
	}
	arguments.token_array[i] = NULL; /*null terminate token array*/
}
