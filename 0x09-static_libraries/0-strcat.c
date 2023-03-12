#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: address of string param 1
 * @dest: address of string param 2
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
