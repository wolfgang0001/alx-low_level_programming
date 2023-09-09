#inculde <stdio.h>
/**
 * main - Entry point
 *
 * Function to print single backwards
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		char i[26] = "zyxwvutsrqponmlkjihfedcba";
		int letter;
	for (letter = 0; letter < 26; letter++)
	{
		putchar(i[letter]);
		putchar(10)
	}
	return (0);	
