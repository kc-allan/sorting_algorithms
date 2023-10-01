#include "sort.h"

/**
 * swap - Swaps integers in the array
 * @a: The first integer
 * @b: The second integer
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers using the bubble sort algorithm
 * @array: Represents the array
 * @size: Size of the array.
 *
 * Description: Sorts an array in ascending order
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int bubbly = 0;
	
	if (array == NULL || size < 2)
		return;
	
	while (bubbly == 0)
	{
		bubbly = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = 0;
			}
		}
		len--;
	}
}