#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies a string to a new buffer
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog (dog_t), or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);

	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

