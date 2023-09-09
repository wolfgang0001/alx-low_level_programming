# incudle <stdio.h>
/**
 *main - Entry point
 *
 * The function to print alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{	
	char letter[26] = "abcdefghijklmnopqrstuvwxyz"
	int a;
	for (a = 0; a < 26; a++)
	{
		putchar(letter[a]);
	}
	putchar('\n');
	return (0);
}
