#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space, in the range from
 * the start of ptr up to the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size), for all
 * values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 * @ptr: is a pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int i, max;
	char *oldptr = ptr;

	max = new_size;
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		return (ptr1);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	if (old_size < new_size)
		max = old_size;

	for (i = 0; i < max; i++)
		*(ptr1 + i) = *(oldptr + i);

	free(ptr);
	return (ptr1);
}
