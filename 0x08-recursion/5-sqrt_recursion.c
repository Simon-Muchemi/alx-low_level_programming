#include "main.h"
/**
 *find_square_root - finds the natural square of a number
 *@num: The number
 *@root: the current number to check
 *Return: the root of the number
 *or -1 f the number has no square root
 */
int find_square_root(int num, int root)
{
	if (root * root > num)
	{
		return (-1);
	}
	else if (root * root == num)
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
