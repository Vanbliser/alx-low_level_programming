#include "dog.h"
/**
 * free_dog - a function to frees the structure dog
 * @d: is pointer to dog of type dog_t
 *
 * Return: nothing.
**/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
