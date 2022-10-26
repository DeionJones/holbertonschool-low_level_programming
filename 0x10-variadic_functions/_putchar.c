#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The charater to print
 *
 * Return: On success 1.
 * On error, -1 is sreturned, and errno is set appropriately,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
