#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * open_file - Opens a file
 * @filename: The name of the file to open
 *
 * Description: Opens a file with the given filename. If it's not possible to
 * open the file, print an error message and exit with status EXIT_FAILURE.
 *
 * Return: A pointer to the opened file
 */
FILE *open_file(char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (file);
}
