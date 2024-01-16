#include "main.h"
/**
 * _abs - a function that inputs the absolute value of an integer
 * @n: int type num
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
