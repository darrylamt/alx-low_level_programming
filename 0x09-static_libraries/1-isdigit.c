#include "main.h"
		
/**
 * _isdigit - Checks whether a given character is a digit
 *
 * @c: The character to check
 *
 * Return: 1 if c is a digit (0-9), 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
