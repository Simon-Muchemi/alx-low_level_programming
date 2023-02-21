#include "main.h"
/**
 * print_sign - prints out the sign of a number
 * @n: Number to be checked
 * Return: 1 if number is positive, 0 if number is zero or -1 if number is negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (1);
	}
}
