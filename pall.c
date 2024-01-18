#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *stack;
	/* Go to the bottom of the stack */
	while (current && current->next != NULL)
	{
		current = current->next;
	}
	/* Print from bottom to top */
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
}
