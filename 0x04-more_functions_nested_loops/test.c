#include "stdio.h"

/**
 * print_square - main function
 * @size: parameter
 * Return:0
 */

int main(void)
{
	int i, j, size;

	size = 10;
		 
  	for (i = 0; i < size; i++)
        {
                for (j = size - 1; j < size; j++)
                {

                        printf("#");
															                }
                printf("\n");
        }
        if (size <= 0)
        printf("\n");
}
