#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the collection of integers passed
 * @size: the number of the integers in the array
 *
 * Return: nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag = 0;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		flag = 0;
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
