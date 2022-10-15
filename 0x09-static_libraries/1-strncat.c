#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string to append by src
 * @src: string to append by dest
 * @n: largest number of bytes to append
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d, b;

	d = b = 0;
	while (*(dest + d))
		d++;
	while (b < n && *(src + b))
	{
		*(dest + d) = *(src + b);
		d++;
		b++;
	}
	if (b < n)
		*(dest + d) = *(src + b);
	return (dest);
}
