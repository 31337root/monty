#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 *
 *
 *
 *
 *
*/

void _push(stack_t **stack, unsigned int line_number)
{

	stack_t *new;

	UNUSED(line_number);

	new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		/*FREE POSIBLE SPACE HERE*/
		exit(EXIT_FAILURE);
	}

	new->prev = NULL;
	new->next = NULL;
	new->n = value;

	if (*stack)
	{
		(*stack)->next = new;
		new->prev = *stack;
		*stack = new;
		return;
	}
	else
	{
		*stack = new;
		return;
	}
}
