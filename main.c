#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * main - Entry point, reads and executes commands from a file
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Description: This function opens a file containing Monty byte codes,
 * reads each line, and executes the opcode on each line. If an error
 * occurs, it prints an error message and exits.
 *
 * Return: EXIT_SUCCESS on success, or EXIT_FAILURE on error
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	size_t len = 1024;
	char *opcode;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	line = malloc(len);
	if (!line)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(line, len, file) != NULL)
	{
	line_number++;
	opcode = strtok(line, "\n\t\r ");
	if (opcode != NULL)
		{
		if (strcmp(opcode, "push") == 0)
		{
		push(&stack, line_number);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
		pall(&stack, line_number);
		}
		else
		{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
		}
		}
	}

	free(line);
	fclose(file);
	return (0);
}
