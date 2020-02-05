#include "sort.h"
/**
 *quick_sort - Sorts an array of integers in ascending order.
 *@array: Array to be sorted.
 *@size: Size of the array.
 *Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
/**
 *quickSort - Divide and Conquer algorithm.
 *@array: Array to be sorted.
 *@low: Starting Index.
 *@high: Ending Index.
 *@size: Size of array.
 *Return: Nothing.
 */
void quickSort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);
		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}
}
/**
 *partition - Lomuto Partition Scheme.
 *@arr: Array to be sorted.
 *@low: Starting Index.
 *@high: Ending Index.
 *@size: Size of array.
 *Return: An integer.
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot, i, j, Current;

	pivot = arr[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (arr[j] <= pivot)
		{
			i += 1;
			if (i != j)
			{
				Current = arr[i];
				arr[i] = arr[j];
				arr[j] = Current;
				print_array(arr, size);
			}
		}
	}
	return (i);
}
