#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sumlist;
	unsigned int i;

	va_start(sumlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sumlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(sumlist);
}
