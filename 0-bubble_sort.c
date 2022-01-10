#include "sort.h"
/**
  *swap_func - swaps two elements
  *@j: First integer to swap
  *@k: Second integer to swap
  */
void swap_func(int *j, int *k)
{
	int temp;

	temp = *j;
	*j = *k;
	*k = temp;
}

/**
  *bubble_sort - sorts an array of integers in ascending order
  *@array: pointer to the number of integers in an array
  *@size: The length of the array
  *
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbling = false;

	if (array == NULL || size < 2)
		return;

	while (bubbling == false)
	{
		bubbling = true;
		for (i = 1; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_func(array + 1, array + i + 1);
				print_array(array, size);
				bubbling = false;
			}
		}
		len--;
	}
}
