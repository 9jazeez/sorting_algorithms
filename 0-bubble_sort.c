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
	int check;
	size_t s;
	/*size_t i;*/
	size_t j;

	s = size;
	if (array == NULL || size < 2)
		return;
	while (check != 0)
	{
		check = 0;
		for (j = 0; j < s - 1; j++)
		{
			if (array[j] <= array[j + 1])
				continue;
			else
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				check = 1;
				print_array(array, size);
			}
		}
	}
}
