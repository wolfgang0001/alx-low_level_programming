#include <stdio.h>
/**
 * main - Entry point
 *
 * Function to print single backwards
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar((char)letter);
	}
	putchar('\n');
	return (0);
}
