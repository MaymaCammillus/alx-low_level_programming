#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: The character to print
 * Return: 1 and 0 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
