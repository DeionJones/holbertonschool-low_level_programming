#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

