nclude "main.h"
/**
 * _isalpha - checks alphabetic character
 * Description: checks for lowercase or uppercase letters
 * @c: iput character
 * Return: returns 1 if c is a letter,lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	int ltr = 0;
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				ltr = 1;
			}
			return (ltr);
		}
}
