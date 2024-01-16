#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	/* Pointeur vers l'élément courant de la liste */
	listint_t *current;

	/* Vérifie si la liste est vide ou a un seul élément */
	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	/* Commence au deuxième élément */
	current = (*list)->next;

	/* Parcours de la liste */
	while (current)
	{
		/* Tant que l'élément courant est plus petit que le précédent */
		while (current->prev && current->n < current->prev->n)
		{
			/* Déplace l'élément courant avant le précédent */
			current->prev->next = current->next;

			/* Si l'élément courant n'est pas le dernier */
			if (current->next)
			{
				current->next->prev = current->prev;
			}

			/* Met à jour les pointeurs */
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;

			/* Si l'élément courant est maintenant le premier */
			if (!current->prev)
			{
				/* Met à jour le pointeur de début */
				*list = current;
			}
			else
			{
				/* Sinon, met à jour le pointeur du précédent */
				current->prev->next = current;
			}

			print_list(*list);
		}

		/* Passe à l'élément suivant */
		current = current->next;
	}
}
