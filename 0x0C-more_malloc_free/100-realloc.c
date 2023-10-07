#include "main.h"
/**
 * _realloc - reallocates all memory
 * @ptr: pointer to the memory previously allocated memory
 * @old_size: its the size in bytes, of the allocated space
 * @new_size: its the new size in bytes of the new memory
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrArr;
	unsigned int i, n = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		ptrArr = malloc(new_size);
		return (ptrArr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	ptrArr = malloc(new_size);
	if (ptrArr == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		ptrArr[i] = old_ptr[i];
	free(ptr);
	return (ptrArr);

}
