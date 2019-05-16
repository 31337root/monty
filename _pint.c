#include "monty.h"

/**
 *
 *
 *
 *
*/

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
		}
		printf("%d\n", (*stack)->n);
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		/*LOOKS DUMB BUT CHECK IF FREE SOMETHING*/
		exit(EXIT_FAILURE);
	}
}
