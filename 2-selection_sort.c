#include "sort.h"

/**
 * selection_sort - An algorithm to sort
 * @array: numbers to sort
 * @size: length of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, least, index;

	for (i = 0; i < size; i++)
	{
		least = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < least)
			{
				least = array[j];
				index = j;
			}
		}

		if (least < array[i])
		{
			temp = array[i];
			array[i] = least;
			array[index] = temp;
			print_array(array, size);
		}
	}
}
