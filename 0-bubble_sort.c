/**
*swap - exchanges the value at two adresses
*
*@a: first value
*@b: second value
*/

void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
*bubble_sort - sorts an array if integers in ascending order
*@array: pointer to the array
*@size: number of element in the array
*/
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
				}
		}
		if (swapped == 0)
			break;
	}
}
