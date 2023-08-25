#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \i\j\k\l"

extern char **op_toks;

/**
 * struct stack_s - Doubly linked list node for stack (or queue).
 * @i: Integer value.
 * @prev: Points to the previous stack (or queue) element.
 * @next: Points to the next stack (or queue) element.
 *
 * Description: Defines a doubly linked list node.
 */

typedef struct stack_s
{
	int i;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Opcode and its corresponding function.
 * @opcode: The opcode.
 * @func: Function to handle the opcode.
 *
 * Description: Defines opcode and function for stack, queues, LIFO, FIFO in a project.
 */

typedef struct instruction_s
{
	char *opcode;
	void (*func)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Opcode Functions */
void monty_push(stack_t **stack, unsigned int line_number);
void monty_pall(stack_t **stack, unsigned int line_number);
void monty_pint(stack_t **stack, unsigned int line_number);
void monty_pop(stack_t **stack, unsigned int line_number);
void monty_swap(stack_t **stack, unsigned int line_number);
void monty_add(stack_t **stack, unsigned int line_number);
void monty_nop(stack_t **stack, unsigned int line_number);
void monty_sub(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);
void monty_pchar(stack_t **stack, unsigned int line_number);
void monty_pstr(stack_t **stack, unsigned int line_number);
void monty_rotl(stack_t **stack, unsigned int line_number);
void monty_rotr(stack_t **stack, unsigned int line_number);
void monty_stack(stack_t **stack, unsigned int line_number);
void monty_queue(stack_t **stack, unsigned int line_number);

/* Primary Interpreter Functions */
int validate_integer(char *str, unsigned int line_number);
void set_op_tok_error(int error_code);
int malloc_error(void);
int no_int_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int check_mode(stack_t *stack);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int usage_error(void);
int run_monty(FILE *script_fd);
void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);
char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_length(char *str, char *delims);
int get_word_count(char *str, char *delims);
char *get_next_word(char *str, char *delims);
ssize_t getline(char **lineptr, size_t *n, FILE *script_fd);
unsigned int token_arr_len(void);
int malloc_error(void);
int pchar_error(unsigned int line_number, char *message);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
char *get_int(int n);
#endif
