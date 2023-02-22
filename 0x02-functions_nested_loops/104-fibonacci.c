#include <stdio.h>
/**
 * numLength - returns the lenth of string
 * @num : number parameter
 * Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}
/**
 *  *main - prints the first 98 fibonaci sequences
 *  Return: 0
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, tmp, mx = 100000000, f1o = 0, f2o = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numLength(mx) - 1 - numLength(fib1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
		}
		printf("%lu", fib1);

		tmp = (fib1 + fib2) % mx;
		tmpo = f1o + f2o + (fib1 + fib2) / mx;
		fib1 = fib2;
		f1o = f2o;
		fib2 = tmp;
		f2o = tmpo;

		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
