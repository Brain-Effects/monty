#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * allocate_line_buffer - Allocates memory for a line buffer
 * @len: The length of the buffer
 *
 * Description: Allocates memory for a line buffer of the given length. If
 * it's not possible to allocate the memory, print an error message and exit
 * with status EXIT_FAILURE.
 *
 * Return: A pointer to the allocated buffer
 */
char *allocate_line_buffer(size_t len)
{
	char *line = malloc(len);

	if (!line)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	return (line);
}
