#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: variable
 * @b: variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
