#include <stdio.h>
/**
 *main - entry point
 *Return: 0 if success
 */
int main(void)
{
	int fib[100];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 100; i++)
       	{
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (i = 0; i < 98; i++)
	{
		printf("%d, ", fib[i]);
	}

	printf("%d\n", fib[98]);

	return (0);
}

