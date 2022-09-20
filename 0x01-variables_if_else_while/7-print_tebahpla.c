#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _1;

	_1 = 'z';
	while (_1 >= 'a')
	{
		putchar(_1);
		_1--;
	}
	putchar('\n');
	return (0);
}
