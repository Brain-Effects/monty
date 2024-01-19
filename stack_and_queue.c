#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * stack - sets the format of the data to a stack (LIFO)
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Description: This is the default behavior of the program.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global.mode = 0;
}

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @stack: double pointer to the top of the stack
 * @line_number: line number
 *
 * Description: When switching mode, the top stack becomes the front of queue
 * and the front of the queue becomes the top of the stack.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	global.mode = 1;
}
