#include "monty.h"

/**
 *
 *
 *
 *
 *
*/

void _pall(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
		}
		while ((*stack)->prev)
		{
			printf("%d\n", value);
			*stack = (*stack)->prev;
		}
		if (!(*stack)->prev)
			printf("%d\n", value);
		return;
	}
	else
		return;
}
