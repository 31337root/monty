#include "monty.h"

#define UNUSED(x) (void)(x)

/**
 * _nop - doesn’t do anything.
 *
 *@stack: pointer to the memory stack
 *
 *@line_number: actual line number of the current opened file
 *
 * Return: void.
 */


void _nop(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
}
