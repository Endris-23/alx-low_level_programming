#include <stdio.h>
/**
 *main - Entry point
 *Description: "print alphabets in reverso
 *Return: Always 0
 */
int main(void)
{
	int n = 112;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
