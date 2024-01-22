#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the top of the stack
 * @line_number: line number in the file where the opcode is called
 *
 * Description: The top element of the stack becomes the last one, and the
 * second top element of the stack becomes the first one.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (temp != NULL && temp->next != NULL)
	{

	*stack = temp->next;
	(*stack)->prev = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = (*stack)->prev;
	if ((*stack)->prev != NULL)
		{
		printf("Before setting prev->prev: %d\n", (*stack)->prev->n);
		(*stack)->prev->prev = temp;
		(*stack)->prev->next = NULL;
		}
	}
}
