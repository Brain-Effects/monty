#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	stack_t *stack = NULL;
	push(&stack, 1, "3");
	push(&stack, 2, "5");
	push(&stack, 3, "7");
	pall(&stack, 4);
	return (0);
}
