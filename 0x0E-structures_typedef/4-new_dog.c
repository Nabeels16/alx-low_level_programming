#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string
 *
 * Return: the length of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the terminating
 * null byte, to a buffer pointed to by dest
 * @dest: the buffer storing the string copy
 * @src: thesource string
 *
 * Return: The pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *boo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	boo = malloc(sizeof(dog_t));
	if (boo == NULL)
		return (NULL);

	boo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (boo->name == NULL)
	{
		free(boo);
		return (NULL);
	}

	boo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (boo->owner == NULL)
	{
		free(boo->owner);
		free(boo);
		return (NULL);
	}

	boo->name = _strcopy(boo->name, name);
	boo->age = age;
	boo->owner = _strcopy(boo->owner, owner);
	return (boo);
}
