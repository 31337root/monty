#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 * _pall - prints all the values on the stack, starting from the top of the stack.
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
 */


void _pall(stack_t **stack, unsigned int line_number)
{
	UNUSED(line_number);

	if (*stack)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
		}
		while ((*stack)->prev)
		{
			printf("%d\n", (*stack)->n);
			*stack = (*stack)->prev;
		}
		if (!(*stack)->prev)
			printf("%d\n", (*stack)->n);
		return;
	}
	else
		return;
}
