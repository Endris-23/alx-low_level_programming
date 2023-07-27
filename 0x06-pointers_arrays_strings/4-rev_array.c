#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= 0)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
