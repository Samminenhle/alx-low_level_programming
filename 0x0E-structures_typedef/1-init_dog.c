#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * *d: pointer to a structure
 * @name: name of a dod
 * @age: age of a dog
 *
 * Return: 0 on Suceess
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name
			d->age = age;
		d->owner = owner;
	}
}

