#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void selection_sort(int *array, size_t size)
{
    size_t i, n;
    int temp = 0;
    int small;
    int *ptr;

    // Vérifier si l'array est NULL ou si la taille est 0
    if (array == NULL || size == 0)
        return;

    // Parcours du tableau
    for (i = 0; i < size - 1; i++)
    {
        // Initialiser "small" avec l'élément actuel et "ptr" avec son adresse
        small = array[i];
        ptr = &array[i];

        // Trouver le plus petit élément dans le reste du tableau
        for (n = i + 1; n < size; n++)
        {
            if (array[n] < small)
            {
                small = array[n];
                ptr = &array[n];
            }
        }

        // SA MARCHE PAS LA CON DE TA MERE
        if (small != array[i])
        {
            temp = array[i];
            array[i] = small;
            *ptr = temp;
        }

        // Affichage de l'état actuel du tableau
        print_array(array, size);
    }
}


