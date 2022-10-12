#include "main.h"
#include <string.h>

/**
 * _strlen - lengt a pointer
 * @s: pointer
 * Description: lenght of string
 * Return: nothing
 **/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
		++c;

	return (c);
}
