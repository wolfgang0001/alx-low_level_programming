#include <stdio.h>
/**
 * main - Entry point
 * function to print single digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	putchar('\n');
	return (0);
}
