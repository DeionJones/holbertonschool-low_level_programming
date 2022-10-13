#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: appends src
 * @src: appends dest
 * @n: integer to append
 *
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;
	while (d < n && *(src + d))
	{
		*(dest + d) = *(src + d);
		d++;
	}
	while (d < n)
	{
		*(dest + d) = '\0';
		d++;
	}
	return (dest);
}
