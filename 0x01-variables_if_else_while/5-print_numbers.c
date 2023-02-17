#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	puts("\n");	
	return (0);
}
