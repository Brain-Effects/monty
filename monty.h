#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_s - global variable struct
 * @line_number: unsigned int
 * @file: file pointer
 *
 * Description: global variable structure
 * for monty project
 */
typedef struct global_s
{
	int mode;
	unsigned int line_number;
	FILE *file;
} global_t;

extern global_t global;

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int _isdigit(char *str);
int add_node(stack_t **stack, const int n);
int main(int argc, char **argv);
void check_argc(int argc);
FILE *open_file(char *filename);
char *allocate_line_buffer(size_t len);
void process_line(char *line, stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void div_stack(stack_t **stack);
void mul(stack_t **stack);
void mod(stack_t **stack);
void process_file(char *filename);
void pchar(stack_t **stack);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
