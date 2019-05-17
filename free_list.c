#include "monty.h"

/**
 *
 *
 *
 *
 *
*/

void free_list(stack_t **stack)
{
	while ((*stack)->prev)
		*stack = (*stack)->prev;

	while ((*stack)->next)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
	}
	free(*stack);
}
