#ifndef DOG_H
#define DOG_H

/**
* struct dog - is dog's informations
* @name: first information
* @age: second information
* @owner: third information
*
* Description: the structure decleared below is
* one that computes the information of a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
