#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * process_line - Processes a line of input
 * @line: The line of input
 * @stack: A double pointer to the top of the stack
 * @line_number: The line number
 *
 * Description: Parses a line of input and executes the appropriate function
 * based on the opcode. If the opcode is not recognized, print an error message
 * and exit with status EXIT_FAILURE.
 */
void process_line(char *line, stack_t **stack, unsigned int line_number)
{
	char *opcode = strtok(line, "\n\t\r ");

	if (opcode != NULL)
	{
	if (strcmp(opcode, "push") == 0)
	{
		push(stack, line_number);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack, line_number);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(stack, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop(stack, line_number);
	}
	else if (strcmp(opcode, "swap") == 0)
	{
		swap(stack, line_number);
	}
	else if (strcmp(opcode, "add") == 0)
	{
		add(stack, line_number);
	}
	else if (strcmp(opcode, "sub") == 0)
	{
		sub(stack, line_number);
	}
	else if (strcmp(opcode, "div") == 0)
	{
		div_stack(stack);
	}
	else if (strcmp(opcode, "pchar") == 0)
	{
		pchar(stack);
	}
	else if (strcmp(opcode, "pstr") == 0)
	{
		pstr(stack, line_number);
	}
	else if (strcmp(opcode, "rotl") == 0)
	{
		rotl(stack, line_number);
	}
	else
		{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
		}
	}
}
