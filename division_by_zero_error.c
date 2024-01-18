#include "monty.h"
/**
 * division_by_zero_error - write error message to stderr
*/
void division_by_zero_error(void)
{
	dprintf(2, "L%d: division by zero\n", arguments.line_number);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}
