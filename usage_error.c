#include "monty.h"
/**
 * usage_error - function to deal with error during usage
*/
void usage_error(void)
{
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
