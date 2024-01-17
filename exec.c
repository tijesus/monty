#include "monty.h"
/**
 * exec - executes the opcode
 * @file_cont: line file_cont
 * @stack: head linked list - stack
 * @counter: line_counter
 * @file: pointer to monty file
 * Return: no return
 */
int exec(char *file_cont, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(file_cont, " \n\t");
	if (op && op[0] == '#')
		return (0);
	monty.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ 
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(file_cont);
		_free(*stack);
		exit(EXIT_FAILURE); 
	}
	return (1);
}