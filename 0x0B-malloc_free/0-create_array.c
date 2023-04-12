#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size `size` and initialize each element
 * with the char `c`.
 * @size: the size of the array to create.
 * @c: the character to initialize each element of the array with.
 *
 * Description: This function creates an array of `size` bytes in memory and
 * initializes each element of the array with the character `c`.
 *
 * Return: If the array creation was successful, return a pointer to the array.
 * Otherwise, return NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}

