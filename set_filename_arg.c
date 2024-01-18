#include "monty.h"

void set_filename_arg(char **argv)
{
	if (argv[1] == NULL)
		usage_error();

	strcpy(arguments.filename, argv[1]);
}
