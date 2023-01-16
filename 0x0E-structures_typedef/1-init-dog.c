#include <dog.h>

/**
*init_dog - function.
*@d: pointer to struct.
*@name: pointer to string.
*@age: float number for dog age.
*@owner: pointer for string.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;

}
