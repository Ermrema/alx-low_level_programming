#include <stdio.h>
#include <string.h>

int main()
{
<<<<<<< HEAD
	int i;
	int n;

	printf(" the size of integer is %p\n", &i);
	printf("size of a char is %p\n", &n);

=======
	char str[15]= " hello ";
	char str1[6]= "world";
	char str2[10];

	
	strcat(str2, str);
	strcpy(str2, str1);


	printf("this is string 1 %s \n", str2);
	
>>>>>>> b96efb2ce6ba2f3a93ddb1bad13f74bc87487f65

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
