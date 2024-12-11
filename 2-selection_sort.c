#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 *
 * @array: A pointer to the array to be sorted.
 * @size: The size of the array.
 *
 * Description:
 * The function implements the selection sort algorithm, which works by
 * repeatedly finding the smallest element from the unsorted portion of
 * the array and swapping it with the first unsorted element. It continues
 * this process until the array is fully sorted.
 *
 * If the array is NULL or the size is 0, the function does nothing.
 *
 * The function prints the array at each step, showing the array state
 * after each swap.
 *
 * Return: Nothing. The array is sorted in place.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, n;
	int temp = 0;
	int small;
	int *ptr;
	int boolean;

	/*Vérifier si l'array est NULL ou si la taille est 0*/
	if (array == NULL || size == 0)
		return;

	/*Parcours du tableau*/
	for (i = 0; i < size - 1; i++)
	{
		/*Initialiser "small" avec l'élément actuel et "ptr" avec son adresse*/
		small = array[i];
		boolean = 0;
		ptr = &array[i];

	/* Trouver le plus petit élément dans le reste du tableau*/
	for (n = i + 1; n < size; n++)
	{
		if (array[n] < small)
		{
			small = array[n];
			ptr = &array[n];
			boolean = 1;
		}
	}

	/*SA MARCHE PAS LA CON DE TA MERE*/
	if (boolean == 1)
	{
		temp = array[i];
		array[i] = small;
		*ptr = temp;
		print_array(array, size);
	}


	}
}


