#include "monty.h"

/**
 *
 *
 *
 *
 *
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	while ((*stack)->next)
	{
		*stack = (*stack)->next;
	}
	if ((*stack)->prev)
	{
		temp = (*stack)->prev->n;
		(*stack)->prev->n = (*stack)->n;
		(*stack)->n = temp;
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
