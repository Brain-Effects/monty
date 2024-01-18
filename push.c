#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 * @n: integer to push
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number, const char *n)
{
	stack_t *new, *current;
	int num = atoi(n);

	/* Check if n is a number */
	if (num == 0 && *n != '0')
	{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = num;
	new->prev = NULL;
	new->next = NULL;

	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		current = *stack;
		while (current->next != NULL)
		{
		current = current->next;
		}
		current->next = new;
		new->prev = current;
		}
	}
