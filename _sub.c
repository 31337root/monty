#include "monty.h"

/**
 *
 *
 *
 *
 *
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
	}
	if ((*stack)->prev)
	{
		(*stack)->prev->n -= (*stack)->n;
		_pop(stack, line_number);
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
