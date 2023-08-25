#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * print_pop_error - Displays pop error message for empty stacks.
 * @line_number: Line number in the script where the error occurred.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * print_pint_error - Displays pint error message for empty stacks.
 * @line_number: Line number in Monty bytecode file where the error occurred.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * print_short_stack_error - Displays Monty math function error messages.
 * @line_number: Line number in Monty bytecode file where the error occurred.
 * @op: The operation where the error occurred.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * print_div_error - Displays division error messages for division by 0.
 * @line_number: Line number in Monty where the error occurred.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Prints pchar error messages for empty stacks
 * @line_number: Line number in Monty bytecodes file where error occurred.
 * @message: The corresponding error message to print.
 *
 * Return: (EXIT_FAILURE) always.
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
