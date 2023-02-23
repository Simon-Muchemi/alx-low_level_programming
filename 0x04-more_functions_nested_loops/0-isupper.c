#include "main.h"
/**
 * _isupper - checks if a character is in uppercase
 * @c: character param
 * Return: 1 if uppercase, 0 otherwise
 */
int int _isupper(int c)
{
	if (c >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
}
