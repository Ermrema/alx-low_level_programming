#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[15]= " hello ";
	char str1[6]= "world";
	char str2[10];

	
	strcat(str2, str);
	strcpy(str2, str1);


	printf("this is string 1 %s \n", str2);
	

}



