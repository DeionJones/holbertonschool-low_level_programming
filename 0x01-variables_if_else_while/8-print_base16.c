#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char _1;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	_1 = 'a';
	while (_1 <= 'f')
	{
		putchar(_1);
		_1++;
	}
	putchar('\n');

	return (0);
}
