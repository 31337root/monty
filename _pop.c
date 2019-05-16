#include "monty.h"

/**
 *
 *
 *
 *
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
		}
		if ((*stack)->prev)
		{
			*stack = (*stack)->prev;
			free((*stack)->next);
			(*stack)->next = NULL;
			return;
		}
		free(*stack);
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		/*FREE SPACE HERE*/
		exit(EXIT_FAILURE);
	}
}
