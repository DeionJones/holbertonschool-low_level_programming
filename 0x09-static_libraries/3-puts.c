#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
