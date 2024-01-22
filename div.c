#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * div - divides the second top element of the stack by the top element
 * @stack: double pointer to the top of the stack
 *
 * Description: If the stack contains less than two elements, print an error
 * message and exit. If the top element of the stack is 0, print an error
 * message and exit. Otherwise, divide the second top element of the stack
 * by the top element, store the result in the second top element, and remove
 * the top element.
 */
global_t global = {0, 0, NULL};

void div_stack(stack_t **stack)
{
	stack_t *temp;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", global.line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", global.line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
