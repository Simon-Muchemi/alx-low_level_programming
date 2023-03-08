#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: the base
 * @y: index
 * Return: -1 if y<0,
 * x**y if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
       	{
	       	return -1;
	}
	else if (y == 0)
    	{
        	return 1;
    	}

    	y--;

    	return (x * _pow_recursion(x, y));
}
