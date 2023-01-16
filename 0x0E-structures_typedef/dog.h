#ifndef DOG_H
#define DOG_H

/**
*struct dog - struct for name, age, owner for a dog.
*@name: pointer to string.
*@age: float number for dog age.
*@owner: pointer for string.
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
*init_dog - function.
*@d: pointer to struct.
*@name: pointer to string.
*@age: float number for dog age.
*@owner: pointer for string.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
