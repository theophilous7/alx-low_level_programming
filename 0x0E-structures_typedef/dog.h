#ifndef DOG_H
#define DOG_H
/**
 * struct dog - entry point
 * description - this is a header that defines the struct dog
 * @name: first property
 * @age: second property
 * @owner: third property
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
