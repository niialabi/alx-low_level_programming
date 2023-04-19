#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - dog details
 * @name: Dog's name
 * @age: Dog's age
 * @owner: owner info
 *
 * Description: struct to store basic info of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
