#include "monty.h"
#include <stdio.h>

/**
 * op_mod - computes the rest of the division of the second top element
 * @stack: The stack
 * @line_number: An integer
 *
 * Return: void
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n %= (*stack)->n;
	free_stack_t(stack_pop(stack));
}
