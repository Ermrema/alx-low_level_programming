include "main.h"
/**
 * _islower - prints lowercase character
 * Description:
 * @c: An input character
 * Return: return 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	char i;
	int e = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		e = 1;
	}
	return (e);
}
