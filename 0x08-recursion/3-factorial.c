#include "main.h"
/**
 * factorial - finds the factorial of a number
 * @n: the number
 * Return: -1 if n<0 or 0 if n=1 and 
 * factorial if success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
