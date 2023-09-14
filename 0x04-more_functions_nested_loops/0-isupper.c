#include "main.h"
/**
  * _isupper - check for uppercase characters
  * @c : the function parameters
  * Return: I if it's uppercase
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
