#include "monty.h"

/**
 * print_usage_error - Displays the usage error message.
 *
 * Return: The exit status code.
 */

int usage_error(void)
{
	const char *message = "USAGE: monty file\n";

	fprintf(stderr, "%s", message);
	return (EXIT_FAILURE);
}

/**
 * print_malloc_error - Displays an error message for malloc failure.
 *
 * Return: The program's exit status.
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * print_fopen_error - Displays error message for file opening failure with filename.
 * @filename: Name of the file that failed to open.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int f_open_error(char *filename)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * print_unknown_op_error - Displays error message for unknown instruction.
 * @opcode: Opcode where the error occurred.
 * @line_number: Line number in the Monty file where the error occurred.
 *
 * Return: Always returns (EXIT_FAILURE).
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * print_no_int_error - Displays error for invalid monty_push argument.
 * @line_number: Line number in Monty bytecode where error occurred.
 * Return: Always (EXIT_FAILURE).
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
