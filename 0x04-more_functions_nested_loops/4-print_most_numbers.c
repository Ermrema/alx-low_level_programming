#include "main.h"

/**
 * print_most_numbers - main function
 * Return:0
 */

void print_most_numbers(void)
{
	int i;

	while (i != 50 && i != 52)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
