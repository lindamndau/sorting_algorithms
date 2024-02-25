#include "sort.h"
/**
 * @selection_sort - sorts array of integers in ascending oreder using selsction sort
 *
 */
void selection_sort(int * array, size_t size)
{
	unsigned int i = 0, j, minimum = 0;
	if(size < 2)
	{
		return;
	}
	while(i < size - 1)
	{
		if(j = size)
		{
			if(i != minimum)
			{
				unsigned int tmp = array[i];
				array[i] = array[minimum];
				array[minimum] = tmp;
				print_array(array, size);
			}
			++i;
			minimum = i;
			j = i + 1;
			continue;
		}

		if(array[minimum] > array[j])
		{
			minimum = j;
		}
		++j;
	}

}
