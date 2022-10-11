#include "main.h"

/**
 * swap_int - swap between pointer
 *@a: pointer a
 *@b: pointer b
 * Description: data exchanges pointer
 * Return: nothing
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
