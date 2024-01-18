#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Description: This function opens the file specified by the user and reads it
 * line by line. If the user does not provide exactly one argument or if the
 * file cannot be opened, it prints an error message and exits. It also frees
 * any memory allocated and closes the file before exiting.
 *
 * Return: 0 on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;

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

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
	/* Parse the line and execute the opcode */
	}

	free(line);
	fclose(file);
	return (0);
}
