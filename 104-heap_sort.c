#include "sort.h"
/**
 * @heap-sort - heap sort algorithim
 *
 */
void heap_sort(int *array, size_t size)
{
	int i, temp;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		heapify(array, i, size, size);
	}
	for (i = size -1; i >=0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}

void heapify(int *array, int index, int index2, size_t size)
{
	int max = index2;
	int left = 2 * index2 + 1;
	int right = 2 * index2 + 2;
	int temp;

	if (left < index && array[left] > array[max])
	{
		max = left;
	}
	if (right < index && array[right] > array[max])
	{
		max = right;
	}
	if (max != index2)
	{
		temp = array[index2];
		array[index2] = array[max];
		array[max] = temp;
		print_array(array, size);
		heapify(array, index, max, size);
	}
}
