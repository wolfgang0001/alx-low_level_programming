#include "main.h"
/**
 * _ strlen - returns length of string
 * @s: string
 * Return: length
 */
int _strlen length_of_string(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
