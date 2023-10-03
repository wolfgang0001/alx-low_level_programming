#include "main.h"

/**
 * str_concat - two strings
 * @sa: a string
 * @sb: b string
 * Return: a pointer to a newly allocated memory containing s1 and s2
 */

char *str_concat(char *sa, char *sb)
{
	int l1 = 0, l2 = 0, i = 0, j = 0, len;
	char *strArr;

	if (s1 != NULL)
	{
		while (sa[i++] != '\0')
			l1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (sb[i++] != '\0')
			l2++;
	}

	len = l1 + l2;
	strArr = malloc((len + 1) * sizeof(char));
	if (strArr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		strArr[i] = sa[i];
	for (j = 0; j < l2; j++, i++)
		strArr[i] = sb[j];
	strArr[len] = '\0';

	return (strArr);
}
