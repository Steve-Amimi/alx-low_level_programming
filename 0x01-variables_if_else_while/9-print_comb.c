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

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
