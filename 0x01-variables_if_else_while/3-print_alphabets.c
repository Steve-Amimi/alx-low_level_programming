#include <stdio.h>

/**
 * main - This program writes out the the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return - 0 sucess
 */
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
	Return(0);

}
