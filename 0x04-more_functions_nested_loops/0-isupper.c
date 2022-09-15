#include "main.h"

/**
 * _isupper - main function
 * @c: parameter
 * Return: 1 if upper, else retun 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
