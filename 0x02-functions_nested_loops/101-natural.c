#include <stdio.h>

/**
 * main - the main function
 * Return:0
 */

int main(void)
{
	int n;

	unsigned long int sum1;

	sum1 = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3)  == 0 || (n % 5) == 0)
		{
			sum1 = sum1 + n;
		}
	}
	printf("%lu\n", sum1);
	return (0);
}
