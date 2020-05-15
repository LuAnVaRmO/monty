#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define DELIMITERS " \t\r\n"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct glvar - some useful things.
 * @fname: name of the file
 * @number: value to assign
 * @buff: the line variable
 * @token: value tokenized
 * @namestr: string with the name
 * Description: global variables
 */
typedef struct glvar
{
	FILE *fname;
	char *namestr;
	char *number;
	char *token;
	char *buff;
} globvar;

extern globvar info;

void open_file(char *filename);
void pr_er_open(char *name);
void pr_er_malloc(void);
int is_a_digit(char *n);
void free_all(stack_t *head);
void tokenize(void);
void get_op_f(char *tok, stack_t **h, int line_number);
void _push_f(stack_t **head, unsigned int line_number);
void _pall_f(stack_t **head, unsigned int line_number);

#endif
