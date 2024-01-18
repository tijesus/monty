#include "monty.h"
/**
 * cant_open_error - function to handle file that cant be opened
*/
void cant_open_error(void)
{
	dprintf(2, "Error: Can't open file %s\n", arguments.filename);
	exit(EXIT_FAILURE);
}
