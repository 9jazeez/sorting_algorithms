#include "sort.h"
#include <stdio.h>

/**
 * swapit - Swaps two nodes
 * @num1: Pointer to first number
 * @num2: Pointer to second number
 *
 * Return: void
 */

void swapit(int *num1, int *num2)
{
	int tmp;

	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

/**
 * selection_sort-sorts using the selection sort algorithm
 * @array: Pointer to array to sort
 * @size: Size of array
 *
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t check;

	if (array == NULL || size <= 0)
		return;
	for (size_t i = 0; i < size - 1; i++)
	{
		check = i;
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[j] < array[check])
				check = j;
		}
		if (check != i)
		{
			swapit(&array[check], &array[i]);
			print_array(array, size);
		}
	}
}
