#include "main.h"


/**
 * clear_bit - set the value of a bit to 0 at the given index
 * @n: pointer to a decimal number to change
 * @index: index position to be change
 * Return: 1 if it worked, -1 if error
 */

int	 clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
