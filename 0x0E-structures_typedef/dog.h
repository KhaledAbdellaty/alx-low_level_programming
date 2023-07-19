#ifndef CHECK_DOG
#define CHECK_DOG

/**
 * struct dog - is a new data type holds
 * dog information
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
struct dog
{
	char *name;
	char owner;
	int age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
