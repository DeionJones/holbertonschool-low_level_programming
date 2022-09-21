#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints Holberton with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar";

	while (i <= 8)
	{
		c = s[i];
		putchar(c);
		i++;
	}
	return (0);
}
