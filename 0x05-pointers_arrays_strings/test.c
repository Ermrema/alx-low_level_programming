#include <stdio.h>

int main(void)
{
	int i = 50;
	int *h;

	h = &i;

	printf("the value in address is %d\n", *h);

}



