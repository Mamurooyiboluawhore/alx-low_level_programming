#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: element of the struct
 * @name: element of the struct
 * @age: element of the struct
 * @owner: element of the struct
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

