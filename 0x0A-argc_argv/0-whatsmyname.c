#include <stdio.h>

/**
 * main - prints the name of the progran
 * @argc: number of argumets passed to the function
 * @argv: argument vector of ppinters to strings
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
