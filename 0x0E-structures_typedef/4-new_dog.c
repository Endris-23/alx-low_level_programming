#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that gets a length of string 
 * @str: the string to get the length
 * Return: length of @str 
 */
int _strlen(const cjar *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
 * _strcopy - a function that returns @dest with a copy of a string from @str
 * @src: string with copy
 * @dest: copy string to here
