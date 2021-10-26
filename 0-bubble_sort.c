#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort- A c function that sort array of integers using bubble sort
 * algorithm
 *
 * @array: Array to sort
 * @size: Size of array
 *
 * Return: viod
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i;
	size_t j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (array[j] < array[j + 1])
				continue;
			else
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
