#include "main.h"

/**
 * puts_half - prints half of string
 * @str: parameter to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;

	}
	if (count % 2 == 0)
	{
	int n;

	for (n = count / 2 ; n <= count ; n++)
	{
		_putchar(str[n]);
	}
	}
	else
	{
		{
	int n;

	for (n = (count - 1) / 2 ; n <= count ; n++)
	{
		_putchar(str[n]);
	}
		}
	}
	_putchar('\n');
}
