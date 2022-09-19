#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - main
 * @dest: parameter
 * @src:parameter
 * Return:0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
