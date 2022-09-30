#include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: string to change
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int d = 0;

	while (*(s + d))
	{
		if (*(s + d) >= 'a' && *(s + d) <= 'z')
			*(s + d) = 'a' - 'A';
		d++;
	}
	return (s);
}
