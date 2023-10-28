#include "main.h"
/**
 * _strcmp - a program that compares two strings
 * @z1: first string.
 * @z2: second string.
 * Return: 0 if z1 and z2 are equals,
 * another number if not.
 */

int _strcmp(char *z1, char *z2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(z1 + i) == '\0') && (*(z2 + i) == '\0'))
			break;
		op = *(z1 + i) - *(z2 + i);
		i++;
	}

	return (op);
}
