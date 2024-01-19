#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/types.h>

/**
 * process_file - Processes a file line by line
 * @filename: The name of the file to process
 *
 * Description: Opens the file and reads each line. If the first non-space
 * character of a line is '#', the line is treated as a comment and ignored.
 * Otherwise, the line is processed normally.
 */
void process_file(char *filename)
{
	FILE *file = fopen(filename, "r");
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	if (file == NULL)
	{
		perror("Error: Can't open file");
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
	char *ptr = line;

	/* Skip leading spaces */
	while (isspace(*ptr))
	{
		ptr++;
	}
	/* If the first non-space character is '#', ignore the line */
	if (*ptr == '#')
	{
		continue;
	}

		/* Process the line */
		printf("%s", line);
	}

	free(line);
	fclose(file);
}
