#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
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
