#include "dog.h"
#include <stdio.h>

/**
*print_dog - function.
*@d: a variable of type struct dog
*/
void print_dog(struct dog *d)

{
if (d == NULL)
{
return;
}

if (d->name == NULL)
printf("name: (nil)\n");

else
printf("name: %s\n", d->name);

if (d->age == NULL)
printf("age: (nil)\n");

esle
printf("age: %f\n", d->age);

if (d->owner == NULL)
printf("owner: (nil)\n");

else
printf("owner: %s\n", d->owner);
}

