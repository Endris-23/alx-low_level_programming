#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that gets a length of string
 * @str: - the string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcpy -  a function that returns dest with a copy of a string from str
 * @dest: ztring copied
 * @str: string
 * Return:
 */

