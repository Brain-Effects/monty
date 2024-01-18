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
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	check_argc(argc);
	file = open_file(argv[1]);
	line = allocate_line_buffer(len);

	while (fgets(line, len, file) != NULL)
	{
		line_number++;
		process_line(line, &stack, line_number);
	}

	free(line);
	fclose(file);
	return (0);
}
