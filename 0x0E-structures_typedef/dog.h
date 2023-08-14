#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains a dog name, age and owner.
 * @name: name of dog First member.
 * @age: age of dog Second member.
 * @owner: owner name of dog Third member.
 *
 * Description: Longer description.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
