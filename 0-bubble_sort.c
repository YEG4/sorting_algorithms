#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int i, j, temp;

    for (j = size - 1; j > 0; j--)
    {
        for (i = 0; i <= j; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                print_array(array, size);
            }
        }
    }
}

