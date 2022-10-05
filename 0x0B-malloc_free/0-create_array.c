#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars, and initializes it
 * with a specific char. Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * @size: size of the array
 * @c: the specific character to initialize the array with
 *
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);

	if (array == NULL || size == 0)
		return (NULL);

	do {
		*(array + --size) = c;
	} while (size);

	return (array);
}
