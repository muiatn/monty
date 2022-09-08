#include "monty.h"
#include <stdio.h>

/**
 * pint - prints the value at the top of the stack
 * @stack: The stack
 * @line_number: the linter number
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
