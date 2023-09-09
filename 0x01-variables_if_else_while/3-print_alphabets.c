#include <stdio.h>
/**
 * main - Entry point
 * Function to print alphabet in lower case and uppercase using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar((char)i);
	}
	for (j = 65; j <= 90; j++)
	{
		putchar((char)j);
	}
	putchar('\n');
	return (0);
}
