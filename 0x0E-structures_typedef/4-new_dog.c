#include "dog.h"
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

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
