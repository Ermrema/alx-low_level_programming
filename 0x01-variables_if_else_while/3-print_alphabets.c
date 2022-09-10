#include<stdio.h>
/**
 * main - Entry point
 * Description: prints "priint a to z"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a' ; a < 'z' ; a++)
	{
		putchar(a);
	}
	for (a = 'A' ; a < 'Z'; a++)
	{
		putchar(a);
	}
	return (0);

}
