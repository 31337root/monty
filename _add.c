#include "monty.h"

/**
 * _add - adds the top two elements of the stack.
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
 */

void _add(stack_t **stack, unsigned int line_number)
{
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
	}
	if ((*stack)->prev)
	{
		(*stack)->prev->n += (*stack)->n;
		_pop(stack, line_number);
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
