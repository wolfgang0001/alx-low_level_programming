#inlude <stdio.h>
/**
 * main - Entry point 
 * Function to print alphabet in lower case and uppercase using putchar
 *
 * Return: Always 0 (success)
 */
	int main(void)
{
		char low[26] = "abcdefghijklmnopqrstuvwxyz";
		char upp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	for (i = 0; i < 26; i++)
	{	
		putchar(low[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(upp[j]);
	}
	putchar('\n');
	return (0);	
