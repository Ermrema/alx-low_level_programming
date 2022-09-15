#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return:0
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" %s", fizz);
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" %s", buzz);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" %s", fb);
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
