#include<stdio.h>
/**
 * main - Entry point
 * Description: prints base 16
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
