#include "main.h"
/**
 * _memcpy - a function that copy mem area,
 * @dest: destination mem area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
