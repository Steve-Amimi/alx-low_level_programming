#include "main.h"

/**
 * swap_int - this program swaps int value
 * @a: integer to swap
 * @b: integer to wap
 **/

void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = m;
}
