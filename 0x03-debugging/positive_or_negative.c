#include "main.h"
/**
 * positive_or_negative - check if positive or negative
 *
 * @i: the number to be checked
 *
 * Return: alwyas 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n" , i);
	else
		printf("%d is positive\n" , i);
}
