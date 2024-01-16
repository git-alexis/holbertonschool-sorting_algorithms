#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */

void print_list(const listint_t *list)
{
	int i;

	i = 0;

	/* Tant que la liste n'est pas NULL */
	while (list)
	{
		/* Si l'index est supérieur à 0, on imprime une virgule et un espace */
		if (i > 0)
		{
			printf(", ");
		}

		/* On imprime l'élément courant de la liste */
		printf("%d", list->n);

		/* On incrémente l'index */
		++i;
		/* On passe à l'élément suivant de la liste */
		list = list->next;
	}

	printf("\n");
}
