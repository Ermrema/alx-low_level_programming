#include "main.h"

/**
 * _isupper -main function
 * @c: parameter
 * Return: 1, 0
 */

int _isupper(int c)
{
	char ch;
	
	if (ch >= 'A' && ch <= 'Z')
	{
		_putchar("The character is upper", ch);
	}
	return (1);
	
	if (ch >= 'a' && ch <= 'z')
	{
		_putchar("The character is lower", ch);
	}
	return (0);
}
