#include "main.h"

/**
 * main - prints names
 * @argc: the number of arguments
 * @argv: the string array of arguments
 * Return: always 0 sucecess
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
