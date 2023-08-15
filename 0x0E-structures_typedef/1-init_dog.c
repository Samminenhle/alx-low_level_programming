#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a structure
 * @name: name of a dog
 * @age: age of a dog
 * @owner: pointer to the owner of a dog
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

        if (d)
        {
                d->name = name;
                        d->age = age;
                d->owner = owner;
        }
}
