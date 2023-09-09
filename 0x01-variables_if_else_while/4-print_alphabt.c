#include <stdio.h>
/**
 * main - Entry point
 *
 * The function to print letters expect q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
