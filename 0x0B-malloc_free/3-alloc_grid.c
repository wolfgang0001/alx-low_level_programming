#include "main.h"
/**
 * alloc_grid - returns a pointer to a two dimensional
 * @width: the width
 * @height: the height
 * Return: a pointer to a two dimension array or null
 */

int **alloc_grid(int width, int height)
{
	int **gridArr, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);
	gridArr = (int **)malloc(height * sizeof(int *));
	if (gridArr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gridArr[i] = (int *)malloc(width * sizeof(int));
		if (gridArr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridArr[i]);
			free(gridArr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridArr[i][j] = 0;
		}
	}
	return (gridArr);
}
