#include "sort.h"
/**
 *selection_sort - Sorts an array of integers in ascending order.
 *@array: Array of integers.
 *@size: Size of array.
 *Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, c, min;

	for (a = 0; a < size; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[c])
				c = b;
		}
		if (c == a)
			continue;
		min = array[a];
		array[a] = array[c];
		array[c] = min;
		print_array(array, size);
	}
}
