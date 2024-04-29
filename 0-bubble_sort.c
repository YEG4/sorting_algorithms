#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */


void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	bool swapped;

	if (array == NULL || size <= 0)
	{
		return;
	}

	for (i = 0; i < (int)size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < (int)size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}
}



/**
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;

	if (array == NULL || size <= 0)
	{
		return;
	}
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
*/