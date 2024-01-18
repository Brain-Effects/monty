#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Description: If the stack contains less than two elements, print an error
 * message and exit. Otherwise, add the top two elements of the stack,
 * remove the top element, and set the sum as the new top element of the stack.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, line_number);
	(*stack)->n = sum;
}
