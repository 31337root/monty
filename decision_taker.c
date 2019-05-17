#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 * decision_taker - Function to know what to do with the given opcode.
 * @opcode: opcode to process.
 * @op_arg: argument only valid for push case.
 * @line_number: Current line of the opened file.
 * @stack: Memory stack.
 * Return: void.
*/

void decision_taker(char *opcode, char *op_arg, unsigned int line_number,
stack_t **stack)
{
	int i;
	void (*selection)(stack_t **, unsigned int) = NULL;

	instruction_t options[] = {
		{"push", &_push}, {"pop", &_pop}, {"swap", &_swap},
		{"add", &_add}, {"pall", &_pall}, {"pint", &_pint},
		{"nop", &_nop}, {"mul", &_mul}, {"sub", &_sub},
		{NULL, NULL}
	};

	UNUSED(selection);

	while (i < 10)
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
				{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
					exit(EXIT_FAILURE); }
			}
			selection = options[i].f;

			(*selection)(stack, line_number);
			return; }
		i++;
	}
	if (i == 10)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_number, opcode);
		/*LOOK FOR SOMETHING TO FREE*/
		exit(EXIT_FAILURE);	}
}
