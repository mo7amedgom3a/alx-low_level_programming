#include "main.h"
/**
 * is_palindrome_recursive - Checker for the palindrome
 *
 * @str: String
 *
 * @start: int moves from right to left
 *
 * @end: int move from left to right
 *
 * Return: 0 or 1
 */
int is_palindrome_recursive(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (is_palindrome_recursive(str, start + 1, end - 1));

}
/**
 * is_palindrome - Check if a string is a palindrome
 *
 * @s: String to check
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int size = strlen(s);

	return (is_palindrome_recursive(s, 0, size - 1));
}
