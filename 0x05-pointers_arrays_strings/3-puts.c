#include "main.h"
/**
  * _puts - function name
  * @str: function parameter
  * Return: String and new line
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	putchar("\n");
}
