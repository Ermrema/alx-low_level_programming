#include<stdio.h>
/**
 * main - Entry point
 * Description: prints base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char h;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
