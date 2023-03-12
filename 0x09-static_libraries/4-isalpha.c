#include "main.h"
/**
 * _isalpha - checks for lowercase letters
 * @c: The letter to be checked
 * Return: 1 for an alphabetic letter or 0 for something else
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
