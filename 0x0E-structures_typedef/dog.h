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

typedef struct dog dog_t;

/**
*init_dog - function.
*@d: a variable of type struct dog
*@name: pointer to string.
*@age: float number for dog age.
*@owner: pointer for string.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
*print_dog - prints all member info of a struct dog.
*@d: a variable of type struct dog
*/
void print_dog(struct dog *d);

#endif
