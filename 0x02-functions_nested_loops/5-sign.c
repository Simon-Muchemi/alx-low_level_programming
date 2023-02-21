#include "main.h"
/**
 * print_sign - prints out the sign of a number
 * @n: Number to be checked
 * Return: 1 for positive num, 0 for zero or -1 for negative num
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
