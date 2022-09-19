#include "main.h"
#include <stdio.h>

/**
 * swap_int - main function
 * @a: parameter of type pointer
 * @b: parameter of type pointer
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
