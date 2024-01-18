#include "monty.h"

/*Global Varibles*/
argument_t arguments;

int main(int argc, char **argv)
{
	check_args(argc);
	set_filename_arg(argv);
	initialize_arguments();
	open_file();

	while (fgets(arguments.line, MAX, arguments.fp) != NULL)
	{
		tokenize();
		validate_opcode();
		if (arguments.comment)
		{
			free_token_array();
			arguments.comment = 0;
			arguments.line_number++;
			continue;
		}
		execute_opcode_function();

		free_token_array();
		arguments.line_number++;
	}
	free_stack();
	free_token_array();
	fclose(arguments.fp);
	return (0);
}
