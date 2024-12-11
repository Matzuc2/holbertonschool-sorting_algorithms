#include <stdio.h>
#include <stddef.h>
#include "sort.h"
/**
 * swap - Echange deux entiers dans un tableau.
 * @a: Pointeur sur le premier entier.
 * @b: Pointeur sur le deuxième entier.
 *
 * Cette fonction échange les valeurs de deux entiers pointés par @a et @b.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - Effectue la partition Lomuto sur un tableau.
 * @array: Le tableau à partitionner.
 * @low: L'indice de début de la sous-section du tableau.
 * @high: L'indice de fin de la sous-section du tableau.
 * @size: La taille totale du tableau.
 *
 * Retourne l'indice du pivot après partitionnement. La fonction partitionne
 * le tableau autour du pivot, tel que
 * tous les éléments inférieurs ou égaux
 * au pivot sont à gauche, et ceux supérieurs sont à droite.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}
/**
 * quick_sort_helper - Fonction auxiliaire pour le tri rapide.
 * @array: Le tableau à trier.
 * @low: L'indice de début de la sous-section à trier.
 * @high: L'indice de fin de la sous-section à trier.
 * @size: La taille totale du tableau.
 *
 * Cette fonction est appelée récursivement pour trier les sous-sections
 * du tableau définies par les indices @low et @high.
 */
void quick_sort_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index;

		pivot_index = lomuto_partition(array, low, high, size);
		quick_sort_helper(array, low, pivot_index - 1, size);
		quick_sort_helper(array, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - Trie un tableau d'entiers
 * en ordre croissant avec le tri rapide.
 * @array: Le tableau à trier.
 * @size: La taille du tableau.
 *
 * Cette fonction implémente l'algorithme de tri rapide en utilisant la
 * partition de Lomuto. Si le tableau est NULL ou de taille inférieure à 2,
 * la fonction ne fait rien.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}
