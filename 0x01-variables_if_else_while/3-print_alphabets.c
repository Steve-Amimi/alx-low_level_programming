#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This program writes out the the alphabet in lowercase, and uppercase.
 * Return - (0) success
 **/
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'a'; uppercase <= 'z'; uppercase++)
	{
		putchar(uppercase);
	}

	putchar('\n');
	return(0);
}
