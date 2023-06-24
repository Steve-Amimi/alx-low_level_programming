#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This program writes out the the alphabet in lowercase,except q and e.
 * Return: (0) success
 **/
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
