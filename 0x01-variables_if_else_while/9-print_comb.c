#include <stdio.h>

/**
 * main - Entry point of program
 *
 * THis program prints all possible combinations of single-digit numbers.
 *
 * Return: (0) Success
 **/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
