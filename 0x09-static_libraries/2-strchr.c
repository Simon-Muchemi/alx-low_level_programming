#include "main.h"
/**
 * *_strchr - locates a string character
 * @s: source
 * @c: character to check
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
