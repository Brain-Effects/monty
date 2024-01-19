#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: double pointer to the top of the stack
 *
 * Description: The integer stored in each element of the stack is treated as
 * the ASCII value of the character to be printed. The string stops when either
 * the stack is over, the value of the element is 0, or the value of element
 * is not in the ASCII table. If the stack is empty, print only a new line.
 */
void pstr(stack_t **stack)
{
	stack_t *temp = *stack;

	while (temp != NULL && temp->n != 0 && (temp->n >= 32 && temp->n <= 126))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
