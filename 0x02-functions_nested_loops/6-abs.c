#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 *
 * @k: ASCII character
 *
 * Return: int data type
 */

int _abs(int k)
{
	if (k < 0)
		k = -(k);
	else if (k >= 0)
		k = k;
	return (k);
}
