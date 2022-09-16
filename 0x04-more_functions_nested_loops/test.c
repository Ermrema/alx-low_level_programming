#include "stdio.h"

/**
 * print_square - main function
 * @size: parameter
 * Return:0
 */

int main(void)
{
	int i, j, size;

	size = 6;
		 
  	for (i = 0; i < size; i++)
        {
                for (j = 0; j < size; j++)
                {
                        printf("#");
															                }
                printf("\n");
        }
        if (size <= 0)
        printf("\n");
}
