#include "monty.h"

/**
 * pall - Prints all values on the stack, starting from the top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of current operation.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	(void)line_number;
}
