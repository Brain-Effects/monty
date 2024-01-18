#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * execute_opcode - Executes the given opcode
 * @opcode: The opcode to execute
 * @stack: Double pointer to the top of the stack
 * @line_number: The line number where the opcode appears
 *
 * Description: This function takes an opcode and executes the corresponding
 * function. If the opcode is "push", it calls the `push` function. If the
 * opcode is "pall", it calls the `pall` function. If the opcode is not
 * recognized, it prints an error message and exits.
 *
 * Return: void
 */
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	char *token;
	char *n;

	token = strtok(opcode, " ");
	if (strcmp(token, "push") == 0)
	{
		n = strtok(NULL, " ");
		push(stack, line_number, n);
	}
	else if (strcmp(token, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		exit(EXIT_FAILURE);
	}
}
