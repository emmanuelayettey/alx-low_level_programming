#include <stdio.h>

/**
 * main - a program prints the name of file it was compiled from
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
