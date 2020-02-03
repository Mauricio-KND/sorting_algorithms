#include "sort.h"
/**
 *bubble_sort - Sorts an array of integers in ascending order. 
 * @array: Array of integers.
 * @size: Size of the array.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
    size_t a, b;

    if (size < 2)
            return;
    for (a = 0; a < size - 1; a++)
        for (b = 0; b < size - 1; b++)
            if (array [b] > array [b + 1])
            {
                array[b] += array[b + 1];
                array[b + 1] = array[b] - array[b + 1];
                array[b] -= array[b + 1];
                print_array(array, size);
            } 
}
