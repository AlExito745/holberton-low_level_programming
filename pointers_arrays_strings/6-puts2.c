#include "main.h"

/**
 * puts2 - print a string by even character
 * @str: length of string
 * Description: print even character
 * Return: nothing
 **/

void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
