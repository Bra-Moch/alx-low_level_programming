#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a variable number of integers, separated by a string
 *                 and a newline character
 * @separator: the string to print between integers
 * @n: the number of integers to print
 * @...: the integers to print
 *
 * Description: This funct prints a variable number of ints, separated by
 * the provided string, followed by a newline character. If the separator
 * argument is NULL, it is not printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize argument list */
	va_start(args, n);

	/* Iterate over the integer arguments */
	for (unsigned int i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int))
		/* Print the next integer */

	/* Print separator if not at end and separator argument is not NULL */
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	/* Clean up argument list */
	va_end(args);
	printf("\n");
}
