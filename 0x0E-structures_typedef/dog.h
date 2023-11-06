#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Enter data
 * @name: input
 * @age: input
 * @owner: input
 * Description: The attributes of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Enter data
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
