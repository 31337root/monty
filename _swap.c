#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
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
