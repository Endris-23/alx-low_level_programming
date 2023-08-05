#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: number of arguments
 * @argv: array of argumewnts
 *
 * Return: 0 (success), 1(Error)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
			printf("Error\n");
			return (1);
	}
	return (0);
}
