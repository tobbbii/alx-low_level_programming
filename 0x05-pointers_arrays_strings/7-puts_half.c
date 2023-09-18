#include "main.h"

/**
 * puts_half - prints half of string
 * @str: parameter to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;

	}
	for (n = count / 2 ; n <= count ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
