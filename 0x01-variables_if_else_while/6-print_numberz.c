#include <stdio.h>

/**
 * main - Entry point for program
 * This program prints the base10 numbs with putchar
 *
 * Return: (0) Success
 **/
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
	}
	return (0);
}
