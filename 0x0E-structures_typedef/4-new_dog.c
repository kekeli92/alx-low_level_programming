#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
*new_dog -  function that creates a new dog
*@name: name of new dog
*@age: integer
*@owner: owner of new dog
*
*Return: pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;

	dog_t  *dogpopsy;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dogpopsy = malloc(sizeof(dog_t));

	if (dogpopsy == NULL)
	{
		free(dogpopsy);
		return (NULL);
	}
	dogpopsy->name = malloc(i * sizeof(dogpopsy->name));
	if (dogpopsy->name == NULL)
	{
		free(dogpopsy->name);
		free(dogpopsy);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		dogpopsy->name[k] = name[k];
	dogpopsy->age = age;
	dogpopsy->owner = malloc(j * sizeof(dogpopsy->owner));
	if (dogpopsy->owner == NULL)
	{
		free(dogpopsy->owner);
		free(dogpopsy->name);
		free(dogpopsy);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dogpopsy->owner[k] = owner[k];
	return (dogpopsy);
}
