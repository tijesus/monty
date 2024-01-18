#include "monty.h"
/**
 * validate_opcode - checking through the opcode
*/
void validate_opcode(void)
{
	int i = 0;
	int found = 0;
	instruction_t instructions[] = {
		{"push", &push},
		{"pall", &pall},
		{"pint", &pint},
		{"pop", &pop},
		{"swap", &swap},
		{"add", &add},
		{"nop", &nop},
		{NULL, NULL}
	};

	if (arguments.token_array[0] == NULL || *(arguments.token_array[0]) == '#')
	{
		arguments.comment = 1;
		return;
	}

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, arguments.token_array[0]) == 0)
		{
			found = 1;
			arguments.opcode_function = instructions[i].f;
			break;
		}
		i++;
	}
	if (!found)
		opcode_error();
}
