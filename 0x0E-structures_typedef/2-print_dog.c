#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 *print_dog - Initializes a variable.
 *@d: first param.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
