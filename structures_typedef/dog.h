#ifndef DOG_H
#define DOG_H

#include <stddef.h>  /* NULL üçün */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */


