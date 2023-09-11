#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This is my first struct.
 * @name: this is the first member.
 * @age: this is the second member.
 * @owner: this is the third member.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
