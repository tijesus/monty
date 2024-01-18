#include "monty.h"
/**
 * set_filename_arg - function to set what file does
 * @argv: argument vector
*/
void set_filename_arg(char **argv)
{
	if (argv[1] == NULL)
		usage_error();

	strcpy(arguments.filename, argv[1]);
}
