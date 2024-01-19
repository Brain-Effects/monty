#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: double pointer to the top of the stack
 *
 * Description: If the stack is empty, print an error message and exit.
 * If value at the top of the stack is not in the ASCII table, print an error
 * message and exit. Otherwise, print the char at the top of the stack.
 */
void pchar(stack_t **stack)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", global.line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", global.line_number);
	exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
