#include "monty.h"
/**
 * open_file - function to openn file found
*/
void open_file(void)
{
	arguments.fp = fopen(arguments.filename, "r");

	if (arguments.fp == NULL)
		cant_open_error();
}
