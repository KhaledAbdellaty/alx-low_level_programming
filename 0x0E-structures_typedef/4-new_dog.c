#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that returns string length
 * @s: a string
 * Return: returns string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: returns new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	len_name = _strlen(name);

	len_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->owner = malloc(len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;
	return (dog);
}
