#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * Trie un tableau d'entiers par ordre croissant en utilisant
 * l'algorithme de tri à bulles
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	/* Déclaration des indices pour le parcours du tableau */
	size_t index_a, index_b;
	/* Variable temporaire pour l'échange des éléments */
	int temp;

    /*Vérification si le tableau est NULL ou si contient - de 2 éléments*/
	if (array == NULL || size < 2)
	{
		return;
	}

	/* Parcours du tableau */
	for (index_a = 0; index_a < size - 1; index_a++)
	{
		/* Parcours du tableau à partir de l'élément suivant */
		for (index_b = 0; index_b < (size - index_a - 1); index_b++)
		{
			/* Si l'élément courant est plus grand que le suivant */
			if (array[index_b] > array[index_b + 1])
			{
				/* On échange les deux éléments */
				temp = array[index_b + 1];
				array[index_b + 1] = array[index_b];
				array[index_b] = temp;

				print_array(array, size);
			}
		}
	}
}
