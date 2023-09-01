#include "main.h"

/**
  *_puts - returns a string
  *@str: string pointer
  *
  */

void _puts(char *str)
{
	int count = 0;
	char c; 

	while (str[count] != '\0')
	{
		c = str[count];
		_putchar(c);
		count++;
	}
	_putchar('\n');
}
