#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This function prints out a set of string.
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar("%c/n", ch);
	}
	return 0;
}
