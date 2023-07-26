#include "main.h"
/**
 *_strncpy - a function that copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cbytes;

	for (cbytes = 0; cbytes < n && src[cbytes] != '\0'; cbytes++)
	{
		dest[cbytes] = src[cbytes];
	}
	for (; cbytes < n; cbytes++)
	{
		dest[cbytes] = '\0';
	}
	return (dest);
}
