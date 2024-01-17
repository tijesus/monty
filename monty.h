#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
 * struct MontyExecution - Variables representing Monty program state
 * @arg: Value of the argument
 * @file_pointer: Pointer to the currently open Monty file
 * @current_line: Content of the current line being processed
 * @stack_mode: Flag to switch between stack and queue modes
 * Description: Carries values through the Monty program
 */
typedef struct MontyExecution_s
{
		char *arg;
		FILE *file_pointer;
		char *current_line;
		int stack_mode;
} monty_t;
extern monty_t monty;

void _push(stack_t **head, unsigned int n);
void _pall(stack_t **head, unsigned int n);
int exec(char *file_cont, stack_t **stack, unsigned int counter, FILE *file);
void _free(stack_t *head);



#endif /*monty.h*/