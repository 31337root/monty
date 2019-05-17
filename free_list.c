#include "monty.h"

/**
 * free_list - free list.
 *
 *@stack: pointer to the memory stack
 *
 *
 * Return: void.
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
