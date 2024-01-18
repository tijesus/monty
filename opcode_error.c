#include "monty.h"
/**
 * opcode_error - function that carries out the operation code error
*/
void opcode_error(void)
{
	char array[] = "unknown instruction";
	unsigned int num = arguments.line_number;

	dprintf(2, "L%d: %s %s\n", num, array, arguments.token_array[0]);
	free_token_array();
	fclose(arguments.fp);
	free_stack();
	exit(EXIT_FAILURE);
}
