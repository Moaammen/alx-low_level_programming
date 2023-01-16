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

(d->name == NULL) ? printf("name: (nil)\n") : printf("name: %s\n", d->name);

printf("age: %f\n", d->age);

(d->owner == NULL) ? printf("owner: (nil)\n") : printf("owner: %s\n", d->owner);
}

/**
*void print_dog(struct dog *d)
*{
*if (d != NULL)
*{
*printf("Name: %s\n", (d->name) ? d->name : "(nil)");
*printf("Age: %f\n", (d->age) ? d->age : 0);
*printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
*}
*}
*/
