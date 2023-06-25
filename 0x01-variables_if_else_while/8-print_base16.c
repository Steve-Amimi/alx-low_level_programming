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
	int letter;
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar('0' + numb);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
