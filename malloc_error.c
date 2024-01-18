#include "monty.h"
/**
 * malloc_error - handlig error while allocating memory
*/
void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	fclose(arguments.fp);
	exit(EXIT_FAILURE);
}
