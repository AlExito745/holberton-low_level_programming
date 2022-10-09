#include "main.h"

/**
 * print_most_numbers - print 0-9 whithout 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if ((n == '2') || (n == '4'))
			n++;
		_putchar(n);
	}
	_putchar('\n');
}
