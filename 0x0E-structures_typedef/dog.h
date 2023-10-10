#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure data type
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
