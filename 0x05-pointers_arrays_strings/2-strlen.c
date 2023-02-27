#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string param
 * Return: String length
 */
int _strlen(char *s)
{
	int length;

	while (s[length])
		length++;
	return (length);
}
