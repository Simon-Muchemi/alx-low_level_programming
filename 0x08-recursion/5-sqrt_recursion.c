#include "main.h"
/**
 *find_square_root - finds the natural square of a number
 *@num: The number
 *@root: the current number to check
 */
int find_square_root(int num, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (find_square_root(num, root + 1));
	}
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number
 * Return: the square root n
 * -1 if n has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_square_root(n, 0));
	}
}
