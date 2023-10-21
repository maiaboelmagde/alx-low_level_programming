#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * before_main -  function that prints
 * You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n
 * before the main function is executed.
 *
 *
 * Return: void.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
