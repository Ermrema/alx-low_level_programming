#include <stdio.h>

/**
 * main - the main function
 * Return:0
 */

int main(void)
{
	int n, j;

	unsigned long int sum1, sum2, sum3;

	sum1 = 0;
	sum2 = 0;
	sum3 = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3)  == 0 || (n % 5) ==0)
		{
			sum1 = sum1 + n;
	
		}
	
	}
	/**
	for (j = 1; j < 1024; j++)
	{
		while ((j % 5) == 0)
		{
			sum2 = sum2 + j;
			j++;
		}
	}
	sum3 = sum1 + sum2;
	*/
	printf("%lu\n", sum1);
	return (0);
}
