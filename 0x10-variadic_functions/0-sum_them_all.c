#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters to sum
 * @...: variable number of parameters to sum
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	/* initialize the va_list with the last named argument */

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	/* access each argument in turn */

	va_end(args);
	/* clean up the va_list */

	return (sum);
}
