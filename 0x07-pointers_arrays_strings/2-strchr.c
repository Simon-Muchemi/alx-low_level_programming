#include "main.h"
/**
 * *_strchr - locates a string character
 * @s: source
 * @c: character to check
 * Return: pointer to dest 
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0 ; i++)
	{
		if (s[i] == c)
			return (s + index);
	}

	return ('\0');
}
