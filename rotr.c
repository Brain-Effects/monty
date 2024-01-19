#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to the top of the stack
 *
 * Description: The last element of the stack becomes the top element of stack.
 * rotr never fails.
 */
void rotr(stack_t **stack)
{
	stack_t *temp = *stack;
	stack_t *new_top = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new_top = temp;
	new_top->next = *stack;
	(*stack)->prev = new_top;

	temp = temp->prev;
	temp->next = NULL;

	*stack = new_top;
}
