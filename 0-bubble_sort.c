#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble Sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The size of the array.
 *
 * Description: Compares adjacent elements of the array and
 *              swaps them if they are in the wrong order.
 *              The process is repeated until the array is sorted.
 *              The function prints the array each time a swap is made.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp = 0;
	size_t step;
	int boolean;

	if (array == NULL || size <= 1)
		return;


	for (step = 0; step < size - 1 ; ++step)
	{
		boolean = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				boolean = 1;
			}
		}
	if (boolean == 0)
		break;
	}
}
