#inculde <stdio.h>
/**
 * main - Entry point
 * 
 * Functions to print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int numbers;
		int letters;

	for(numbers = 48; numbers < 58; numbers++)
	{
		putchar(numbers);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
		putchar(10);
	}
	return (0)
}		
