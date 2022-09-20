#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _1;

	_1 = 'a';
	while (_1 <= 'z')
	{
		if ((_1 != 'e') && (_1 != 'q'))
		{
			putchar(_1);
			_1++;
		}
		else
		{
			_1++;
		}
	}
	putchar('\n');
	return (0);
}
