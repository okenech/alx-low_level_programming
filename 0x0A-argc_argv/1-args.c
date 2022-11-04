#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
