#include "stdio.h"

/**
 * main - main function
 * Description: printing putchar to output
 * Return:0
 */

char main(void)
{
	char name[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');

	return (0);
}
