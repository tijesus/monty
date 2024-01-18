#include "monty.h"

void malloc_error(void)
{
	dprintf(2, "Error: malloc failed\n");
	fclose(arguments.fp);
	exit(EXIT_FAILURE);
}
