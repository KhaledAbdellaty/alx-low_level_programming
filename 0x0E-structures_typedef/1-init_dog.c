#include "dog.h"
/**
 * init_dog - a function that initialize
 * a variable of type struct dog
 * @d: the struct type
 * @name: the first element
 * @age: the second element
 * @owner: the third element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
