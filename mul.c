#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: double pointer to the top of the stack
 *
 * Description: If the stack contains less than two elements, print an error
 * message and exit. Otherwise, multiply the second top element of the stack
 * with the top element, store the result in the second top element, and remove
 * the top element.
 */

void mul(stack_t **stack)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", global.line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
