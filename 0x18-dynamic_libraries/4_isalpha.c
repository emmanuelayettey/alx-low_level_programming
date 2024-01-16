#include "main.h"
/**
 * _isalpha - a function that checks if a char is an alphabet char.
 * @c: type of int char
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
