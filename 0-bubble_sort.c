#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sorts an array of integers in ascending order by Bubble sort
 *
 * @array: array to be sorted
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int temp = 0;
	int isSwap = 0;

	for (i = 0; i < size; i++)
	{
		isSwap = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				isSwap = 1;
				print_array(array, size);
			}
		}
		if (!isSwap)
		{
			return;
		}
	}
}
