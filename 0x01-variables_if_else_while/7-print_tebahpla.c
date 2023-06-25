#include <stdio.h>

/**
 * main - Entry point of program
 *
 * THis program prints out letters in reverse
 *
 * Return: (0) Success
 **/
int main(void)
{
	int chac;

	for (chac = 'z'; chac >= 'a'; chac--)
	{
		putchar(chac);
	}

	putchar('\n');
	return (0);
}
