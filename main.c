#include "monty.h"

int value = 0;

/**
 * main - Entry point.
 *
 *
 *
 *
*/

int main(int argc, char **argv)
{
	FILE *fp;
	size_t str_len = 0;
	unsigned int line_number = 1;
	char *lineptr = NULL, *delim = " \n", *opcode = NULL, *op_arg = NULL;
	stack_t *stack = NULL;

	if (argc == 2)
	{
		fp = fopen(argv[1], "r");

		if (!fp)
		{
			fprintf(stderr, "Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		while (getline(&lineptr, &str_len, fp) != -1)
		{
			opcode = strtok(lineptr, delim);

			if (opcode)
			{
				op_arg = strtok(NULL, delim);

				decision_taker(opcode, op_arg, line_number, &stack);
			}
			line_number++;
		}
		fclose(fp);
		free(lineptr);
		free_list(&stack);
		return (0);
	}
	perror("USAGE: monty file.");
	exit(EXIT_FAILURE);
}
