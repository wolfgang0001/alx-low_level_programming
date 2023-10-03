#include "main.h"

/**
 *  create_array - creates char in an unsigined integer
 *  @size: the size of the array for the integer
 *  @c: the characters
 *  Return: NULL if the size is 0 and a pointer to the array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *strArr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	strArr = (char *)malloc(size * (sizeof(char)));
	if (strArr == NULL)
		return (NULL);
	while (i < size)
	{
		strArr[i] = c;
		i++;
	}

	return (strArr);
}
