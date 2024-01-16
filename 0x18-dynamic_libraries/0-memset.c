#include "main.h"
/**
 * _memset - a funtion that fills the mem with constant byte,
 * @s: mem area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
