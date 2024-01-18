#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "monty.h"

/**
 * _isdigit - checks if a string is a number
 * @str: string to check
 * Return: 0 if true, 1 otherwise
 */
int _isdigit(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (1);
	}

	if (str[0] == '-')
	{
		i = 1;
	}

	for (; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0)
		{
		return (1);
		}
	}

	return (0);
}
