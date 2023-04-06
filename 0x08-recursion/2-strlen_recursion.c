#include "main.h"

/**
 * str_length_recursive - finds the length of a string recursively
 *
 * @s: a pointer to the string whose length we want to find
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
        return 0;
	} else
	{
        return 1 + _strlen_recursion(s + 1);
	}

}

