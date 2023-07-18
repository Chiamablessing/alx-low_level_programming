#include "main.h"
/**
 * check_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 * @left: start of the string
 * @right: end of the string
 * Return: returns returns 1 if palindrome and 0 otherwise
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - calls the check_palindrome function
 * @s: the string to be checked
 * Return: returns returns 0 if check_palindrome is o and 1 otherwise
 */

int is_palindrome(char *s)
{
	int left = 0, len = strlen(s) - 1;
	int f = check_palindrome(s, left, len);

	if (f == 0)
		return (0);
	return  (1);
}
