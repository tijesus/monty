#include "monty.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector containing array of argument strings
 * Return: 0 on success
*/
int main(int argc, char **argv)
{
	char *line_cont;
	FILE *file_pointer;
	size_t size = 0;
	ssize_t read_file = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	/*check if the cargument is up tp 2 ie exec command and file*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file_pointer\n");
		exit(EXIT_FAILURE);
	}
	file_pointer = fopen(argv[1], "r");
	monty.file_pointer = file_pointer;
	/*No file to read in the command line*/
	if (file_pointer == NULL)
	{
		fprintf(stderr, "Error: Can't open file_pointer %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*a loop that constantly execute the commant received*/
	while (read_file > 0)
	{
		line_cont = NULL;
    	if (fgets(line_cont, size, file_pointer) == NULL)
		{
			free(line_cont);
			break;/*exit if no line in the file*/
		}
		monty.current_line = line_cont;
		counter++;
		exec(line_cont, &stack, counter, file_pointer);
		free(line_cont);
	}
	_free(stack);
	fclose(file_pointer);
return (0);
}