#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description - print the alphabet in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
