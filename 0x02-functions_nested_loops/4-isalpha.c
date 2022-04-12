#include "main.h"

/**
 * _isalpha- alphabetic character
 * @c: character to check
 * Return:void
 */

int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
