#include <stdio.h>
/**
 * main - Entry point
 * Functions to print all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 15; numbers++)
	{
		if (numbers < 10)
		{
			putchar(number + '0');
		}
		else
		{
			putchar(number - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
