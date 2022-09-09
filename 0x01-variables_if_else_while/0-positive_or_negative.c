#include <stdlib.h>
#include <time.h>
/**
 * main -
 * description:
 * return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	return (0);
}
