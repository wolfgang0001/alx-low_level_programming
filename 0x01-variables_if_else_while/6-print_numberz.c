#include <stdio.h>
/**
 * main - Entry point
 *
 * Function to print single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}
	putchar('\n');
	return (0);
}
