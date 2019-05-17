#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 *
 *
 *
 *
 *
*/

void decision_taker(char *opcode, char *op_arg, unsigned int line_number, stack_t **stack)
{
	int i;
	void (*selection)(stack_t **, unsigned int) = NULL;

	instruction_t options[] =
	{
		{"push", &_push},
		{"pop", &_pop},
		{"swap", &_swap},
		{"add", &_add},
		{"pall", &_pall},
		{"pint", &_pint},
		{"nop", &_nop},
		{NULL, NULL}
	};

	UNUSED(selection);

	while (i < 8)
	{
		if ((strcmp(opcode, options[i].opcode)) == 0)
		{
			if ((strcmp(options[i].opcode, "push")) == 0)
			{
				if (op_arg && op_arg[0] >= '0' && op_arg[0] <= '9')
				{
					value = atoi(op_arg);
					selection = options[i].f;
					(*selection)(stack, line_number);
					return;
				}
				else
				{
					fprintf(stderr, "L%d: usage: push integer\n", line_number);
					exit(EXIT_FAILURE);
				}
			}
			selection = options[i].f;

			(*selection)(stack, line_number);
			return;
		}
		i++;
	}
	if (i == 8)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
		/*LOOK FOR SOMETHING TO FREE*/
		exit(EXIT_FAILURE);
	}
}
