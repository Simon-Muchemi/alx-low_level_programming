#include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: The letter to be checked
 * Return: 1 for a lowercase letter or 0 for something else
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
