#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a variable number of strings, separated by a string
 *                 and a newline character
 * @separator: the string to print between strings
 * @n: the number of strings to print
 * @...: the strings to print
 *
 * Description: This function prints a variable number of strings,separated by
 * the provided string, followed by a newline character. If the separator
 * argument is NULL, it is not printed. If one of the strings is NULL, "(nil)"
 * is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize argument list */
	va_start(args, n);

	/* Iterate over the string arguments */
	for (unsigned int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
	/* Print "(nil)" if string is NULL, otherwise print the string */
		printf("%s", (str != NULL) ? str : "(nil)");
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
