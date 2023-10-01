#include "sort.h"

/**
* bubble_sort - sorts integers in ascending order using the bubble sort algoritm
* @array: array to be sorted
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
    int *temp;
    size_t i, k;

    for (i = 0; i < size; i++)
    {
        for (k = i + 1; k <= size; k++)
        {
            if (array[i] > array[k])
            {
                temp[i] = array[k];
                temp[k] = array[i];
                continue;
            }
            print_array(temp, size);
        }
    }
}