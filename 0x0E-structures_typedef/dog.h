#ifndef MY_DOG_H
#define MY_DOG_H

/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - struct type to initialize
 * @d: pointer of struct type
 * @name: dog name
 * @age: integer
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#include "main.h"
#endif
