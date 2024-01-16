#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * Trie un tableau d'entiers en ordre croissant
 * en utilisant l'algorithme de tri par sélection
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	/* Déplace un par un la limite du sous-tableau non trié */
	for (i = 0; i < size - 1; i++)
	{
		/* Trouve l'élément minimum dans le tableau non trié */
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}

		/* Échange l'élément min avec le premier élément non trié */
		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;

			print_array(array, size);
		}
	}
}
