#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char abc;

	abc = 'z';
	while (abc >= 'a')
	{
		putchar(abc);
		abc--;
	}
	putchar('\n');
	return (0);
}
