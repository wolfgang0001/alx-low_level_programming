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
		char letters[24] = "abcdfghijklmnoprstuvwxyz";

	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(letters[i]);
	}
	putchar(10);
	return (0);
}	
