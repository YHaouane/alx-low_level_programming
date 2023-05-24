#include "main.h"


/**
 * flip_bits - flip bits to convert one number to another 
 * @n: the first number
 * @m: second number to be convert
 * Return: number of bits that was needed to flip
 */

unsigned int	 flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
