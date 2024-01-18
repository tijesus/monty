#include "monty.h"
/**
 * initialize_arguments - function to initialize arguements for file
*/
void initialize_arguments(void)
{
	arguments.line_number = 1;
	arguments.top = NULL;
	arguments.bottom = NULL;
	arguments.stack_length = 0;
	arguments.stack_flag = 1; /*if 1, act as stack, if 0, act as queue*/
}
