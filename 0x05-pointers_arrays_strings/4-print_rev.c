#include "main.h"

/**
 * rev_string - function that reverses a string.
 * 
 * @str: String for reverse
 *
 * Return: 0
 **/
void rev_string(char *s);
{
	int longe = 0;
	int o;

	while (*s != '\0')
	{
		longe++;
		s++;
	}
	s--;
	for  (o = longe; o > 0; o++)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
