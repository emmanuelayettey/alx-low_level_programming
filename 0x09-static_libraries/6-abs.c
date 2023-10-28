#include "main.h"
/**
 * _abs - a program that computes the absolute value of an integer
 * @i: int type number
 * Return: absolute value of @i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
