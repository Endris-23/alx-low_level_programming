#include "function_pointers.h"
#include <stddef>
/**
 * print_name -prints a name
 * @name: the string name
 * @f: printing function pointer
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
