#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the top of the stack
 *
 * Description: The top element of the stack becomes the last one, and the
 * second top element of the stack becomes the first one. rotl never fails.
 */
void rotl(stack_t **stack)
{
	stack_t *temp = *stack;
	stack_t *new_top = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}

	new_top = (*stack)->next;
	new_top->prev = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = *stack;
	(*stack)->prev = temp;
	(*stack)->next = NULL;
	*stack = new_top;
}
