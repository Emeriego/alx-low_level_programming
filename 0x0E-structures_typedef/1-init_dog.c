#include "dog.h"
#include <stddef.h>
/**
 *init_dog - Initializes a variable.
 *@d: first param.
 *@name: second param.
 *@owner: third param.
 *@age: fourth param.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
