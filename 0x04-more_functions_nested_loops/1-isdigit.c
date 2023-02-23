#include "main.h"
/**
 * _isdigit - check for numbers
 * @c: num parameter
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
