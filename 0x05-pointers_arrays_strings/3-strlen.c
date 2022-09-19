#include "main.h"
#include <stdio.h>

/**
 * _strlen - main fuction to the string
 * @s: parameter pointer
 * Return:0
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char strings = s[0];

	while (strings != '\0')
	{
		sum++;
		strings = s[i++];
	}
	return (sum);
}
