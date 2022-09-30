#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @b: string to capitalize
 *
 * Return: address of b
 */
char *cap_string(char *b)
{
	int d = 0, j;
	char a[] = " \t\n,;,!?\"(){}";

	while (*(b + d))
	{
		if (*(b + d) >= 'a' && *(b + d) <= 'z')
		{
			if (d == 0)
				*(b + d) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(b + d - 1))
						*(b + d) -= 'a' - 'A';
				}
			}
		}
		d++;
	}
	return (b);
}
