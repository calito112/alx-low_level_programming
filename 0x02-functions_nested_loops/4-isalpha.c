#include "main.h"

/**
 * _isalpha - checks for character
 *
 * @c: a function that checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
