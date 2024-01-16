#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;

    /* Parcours du tableau */
	while (array && i < size)
	{
		/* Imprime une virgule après le premier élément */
		if (i > 0)
		{
			printf(", ");
		}

		/* Imprime l'élément courant */
		printf("%d", array[i]);

		/* Incrémente l'index */
		++i;
	}

	printf("\n");
}
