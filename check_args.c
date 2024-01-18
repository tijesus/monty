#include "monty.h"
/**
 * check_args - function to check if the argument in terminal is equal to 2
 * @argc: count the arguments passed in terminal 
*/
void check_args(int argc)
{
	if (argc < 2 || argc > 2)
		usage_error();
}
