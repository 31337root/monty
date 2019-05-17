#include "monty.h"

/**
 * _pint - prints the value at the top of the stack, followed by a new line
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		while ((*stack)->next)
		{
			*stack = (*stack)->next;
		}
		printf("%d\n", (*stack)->n);
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		/*LOOKS DUMB BUT CHECK IF FREE SOMETHING*/
		exit(EXIT_FAILURE);
	}
}
