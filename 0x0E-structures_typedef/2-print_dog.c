#include <stdio.h>
#include "dog.h"

/**
 * print_dog -   function that prints a struct dog.
 *
 * @d: struct of dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name != NULL) ? printf("%s\n", d->name) :  printf("(nil)\n");
		printf("Age: ");
		printf("%.6f\n", d->age);
		printf("Owner: ");
		(d->owner != NULL) ? printf("%s\n", d->owner) :  printf("(nil)\n");
	}
}
