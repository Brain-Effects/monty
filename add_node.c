#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * add_node - adds a new node at the beginning of a stack_t list
 * @stack: double pointer to a stack_t doubly linked list
 * @n: integer to add to the stack_t list
 * Return: 1 if it succeeded, 0 otherwise
 */
int add_node(stack_t **stack, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		return (0);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = new;
	}
	*stack = new;

	return (1);
}
