#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: pointer a string
 * @n: array
 * Description: print array
 * Return: nothing
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i = i + 1)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
