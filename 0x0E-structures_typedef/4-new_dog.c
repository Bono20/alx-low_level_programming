#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ...
 *
 * Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, won_l = 0;

	if (name != NULL && owner != NULL)
	{
		2222
