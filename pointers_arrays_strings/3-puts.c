#include "main.h"

/**
 * _puts - print
 * @str: string
 * Description: prints a string
 * Return: nothing
 **/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
