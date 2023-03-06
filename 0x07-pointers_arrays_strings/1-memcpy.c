#include "main.h"
/**
 * *_memcpy - copys specified bytes of memory area
 * @dest: pointer to first string parameter
 * @src: pointer to string parameter 2
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
