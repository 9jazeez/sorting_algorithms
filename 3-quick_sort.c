#include "sort.h"
#include <stdio.h>

/**
 * quick_sort- sorts using the quick sort algorithm
 * @array: Array to sort
 * @size: Size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	size_t low;
	size_t high;

	if (size == 0 || size == 1)
	{
		return;
	}
	low = 0;
	high = size - 1;

	sort_it(array, low, high, size);
}

/**
 * sort_it-Uses recursive pattern to sort the array
 * @array: Array to sort
 * @low: Low index
 * @high: High index
 * @size: size of array
 *
 * Return: Void
 */

void sort_it(int *array, int low, int high, size_t size)
{
	int side;

	if (low < high)
	{
		side = partition(array, low, high, size);
		sort_it(array, low, side - 1, size);
		sort_it(array, side + 1, high, size);
	}
}

/**
 * partition- fuction to partition that array
 * @array: Array to sort
 * @low: Low index
 * @high: high index
 * @size: size of array
 *
 * Return: int side index
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int holder;
	int i, j;

	pivot = array[high];
	i = low - 1;
	j = low;

	while (j < high)
	{
		if (array[j] <= pivot)
		{
			holder = array[i];
			array[i] = array[j];
			array[j] = holder;
			print_array(array, size);
		}
		j++;
	}
	if (pivot < array[i + 1])
	{
		holder = array[i + 1];
		array[i + 1] = array[high];
		array[high] = holder;
		print_array(array, size);
	}
	return (i + 1);

}
