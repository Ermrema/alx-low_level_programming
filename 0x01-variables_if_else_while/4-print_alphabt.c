#include<stdio.h>
/**
 * main - Entry point
 * Description: prints alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q')
		continue;

		else if (c == 'e')
		continue;

		putchar(c);
	}
	putchar('\n');
	return (0);
}

