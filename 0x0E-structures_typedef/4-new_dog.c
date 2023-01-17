#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *copy_of_name;
	char *copy_of_owner;

	dog1 = malloc(sizeof(dog_t)); /* validate if dog1 initiated correctly */
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	/* make copies of struct members and validate, else free on error */
	/* set values of struct members to copies of arguments or set to NULL */
	if (name != NULL)
	{
		copy_of_name = malloc(strlen(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = strcpy(copy_of_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(strlen(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = strcpy(copy_of_owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
