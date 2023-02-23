#include "main.h"
#include <unistd.h>
/**
 * _puchar - write character to stdout
 * @c: character param
 * Return: 1 (success) -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
