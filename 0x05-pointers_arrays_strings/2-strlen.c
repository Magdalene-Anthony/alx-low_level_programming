#include "main.h"

/**
 * _strlen - function that returnsthe length of a string
 *
 * @s: this is the input string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int index;
	
	for  (index = 0; s[index] != '\o' ; index++)
		;
	return (index);
}
