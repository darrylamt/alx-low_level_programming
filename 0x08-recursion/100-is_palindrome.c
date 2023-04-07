#include "main.h"

int check_palindrome(char *string, int start, int end);
int get_string_length(char *string);

/**
 * is_palindrome - checks if a string is a palindrome
 * @string: string to check
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *string)
{
	if (*string == '\0')
		return (1);
	return (check_palindrome(string, 0, get_string_length(string)));
}

/**
 * get_string_length - returns the length of a string
 * @string: string to calculate the length of
 * Return: length of the string
 */
int get_string_length(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + get_string_length(string + 1));
}

/**
 * check_palindrome - checks if the string is a palindrome recursively
 * @string: string to check
 * @start: start index
 * @end: end index
 * Return: 1 if the string is a palindrome, 0 if not
 */
int check_palindrome(char string, int start, int end)
{
	if ((string + start) != *(string + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(string, start + 1, end - 1));
}
