
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: dog's name
 * @age: dog's age in years
 * @owner: owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
