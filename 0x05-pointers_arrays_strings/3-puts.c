#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * Return: 0
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}			