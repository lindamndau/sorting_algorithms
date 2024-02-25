#include "sort.h"
/**
 * @ quick_sort - sorts an array of integers in ascending order
 *
 */
void quick_sort(int * array, size_t size)
{
	if(!array || size < 2)
	{
		return;
	}
	quick_sort_r(array, 0, size - 1, size);
}

/**
 * @quick_sort_r - 
 *
 *
 */
void quick_sort_r(int * array, int low, int high, size_t size)
{
	int lom_part = 0;

	if(low < high)
	{
		lom_part = lomuto_partition(array, low, high, size);
		quick_sort_r(array, low, lom_part - 1, size);
		quick_sort_r(array, lom_part + 1, high, size);
	}
}

/**
 * @lomuto_partition - 
 *
 *
 *
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int j = 0, i = 0, pivot = 0, aux = 0;
	pivot = array[high];
	i = low;
	for(j = low; j < high; ++j)
	{
		if(array[j] < pivot)
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;

			if(aux != array[i])
			{
				print_array(array, size);
			}
			++i;
		}
	}

	aux = array[i];
	array[i] = array[high];
	array[high] = aux;

	if(aux != array[i])
	{
		print_array(array, size);
	}
	return(i);
}
