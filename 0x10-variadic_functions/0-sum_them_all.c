#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sumlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumlist, int);

	va_end(sumlist);

	return (sum);
}
