#include "monty.h"
/**
 * execute_opcode_function - function to execute the opcode in file
*/
void execute_opcode_function(void)
{
	arguments.opcode_function(&(arguments.top), arguments.line_number);
}
