#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * check_argc - Checks if correct number of command line arguments was passed
 * @argc: The number of command line arguments
 *
 * Description: If the user does not give any file or more than one argument
 * to the program, print an error message and exit with status EXIT_FAILURE.
 */
void check_argc(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
