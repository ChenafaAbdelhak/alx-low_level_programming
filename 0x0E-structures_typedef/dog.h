#ifndef file_name
#define file_name

/**
 * struct dog - a stcrut for a dog
 * @name: his name
 * @age: age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
