#include <stdio.h>
#include <string.h>

int main(char *dest, char *src)
{
	char i = 's';
	char n = 'e';
	
	dest = &i;
	src = &n;

	strcat(dest, src);
	printf("%p\n", dest);
	return (*dest);
}	
