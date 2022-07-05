#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: a character to be checked
 * Return: 1 and 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
