#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min number of coins
 * @argc: number of comandline argument
 * @argv: pointer to an array
 * Return: 0 (success), non-zero-fail
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 2};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[1])
			{
				leastcents += money /  cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
