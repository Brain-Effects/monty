#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * sub - subtracts the top element of the stack from the second top element
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Description: If the stack contains less than two elements, print an error
 * message and exit. Otherwise, subtract the top element from the second top
 * element, remove the top element, and set the result as the new top element.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int diff;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	diff = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);

	(*stack)->n = diff;
}
