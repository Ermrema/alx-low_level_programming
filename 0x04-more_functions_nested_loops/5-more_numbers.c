#include "main.h"

/**
 * more_numbers - main function
 * Retun: 0
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
		}
		_putchar('\n');

	}
}
