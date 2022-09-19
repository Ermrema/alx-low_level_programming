#include "main.h"
#include <stdio.h>

/**
 * print_rev - main function
 * @s: parameter
 * Return:0
 */

void print_rev(char *s)
{
	int reverse = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		reverse++;
	}
	for (n = (reverse - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
