#include "monty.h"
#include <stddef.h>

/**
 * pall - print all the vales on the stack
 * @stack: the stack
 * @line_number: the number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *cursor = *stack;

	(void) line_number;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
