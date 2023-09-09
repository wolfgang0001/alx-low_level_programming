#include <stdio.h>
/**
 *main - Entry point
 *
 * The function to print alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar((char)a);
	}
	putchar('\n');
	return (0);
}
