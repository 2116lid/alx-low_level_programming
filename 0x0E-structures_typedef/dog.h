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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
