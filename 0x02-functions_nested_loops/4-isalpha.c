#include "main.h"
/**
 * _isalpha - checks for alhabetical character
 * @c: is the char to be checked
 * Return: 1 if c is a letter, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
