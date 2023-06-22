#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - This fuction determines if a number is positive or negative or zero.
 * Return: 0 as sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("Number is positive");
	}
	else if(n == 0)
	{
		printf("Number is zero");
	}
	else
	{
		printf("Number is negative")
	}
	return (0);
}
