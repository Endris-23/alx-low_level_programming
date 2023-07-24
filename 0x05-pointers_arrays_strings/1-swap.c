#include "main.h"

/**
 * swap_int - take in two variable int and swaps them
 * @author Anish
 * @a: swaps and store to address of b
 * @b: swaps and store to address of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
