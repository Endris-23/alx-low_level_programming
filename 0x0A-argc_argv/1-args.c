#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc,  char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
