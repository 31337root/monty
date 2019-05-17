#include "monty.h"

/**
 * _sub - subtracts the top element of the stack from the
 * second top element of the stack.
 * @stack: memory stack.
 * @line_number: Current line number in the opened file.
 * Return: void.
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
