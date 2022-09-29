#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int d, b;

	d = b = 0;
	while (*(dest + d))
		d++;
	while ((*(dest + d) = *(src + b)))
	{
		d++;
		b++;
	}
	return (dest);
}
