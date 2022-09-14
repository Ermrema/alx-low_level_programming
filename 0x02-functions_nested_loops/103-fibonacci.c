#include <stdio.h>

/**
 * main - main function
 * Return:0
 */

int main(void)
{
	int i;

	unsigned long int n, j, next, sum1;

	j = 1;
	n = 2;
	sum1 = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum1 = sum1 + j;
		}
		next = j + n;
		j = n;
		n = next;
	}
	printf("%lu\n", sum1);
	return (0);
}
