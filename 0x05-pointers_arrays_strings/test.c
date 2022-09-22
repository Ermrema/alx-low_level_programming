#include <stdio.h>

int main()
{
	int i;
	int n;

	printf(" the size of integer is %p\n", &i);
	printf("size of a char is %p\n", &n);


	printf(" we are now storing the address of a variale in a pointer\n");

	int k=10;
	int j=1;

	int *m=&k;
	int *o=&j;
	

	printf("the value of the pointer is %p\n", m); 
	*m=11;
	printf("%d\n", k);
 	return (0);	
}
