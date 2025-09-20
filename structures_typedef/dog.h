#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: dog's name (string)
 * @age: dog's age in years
 * @owner: owner's name (string)
 */
struct dog
{

char *name;
float age;
char *owner;
};
/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
