#include "main.h"
#include  <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: value to overide
 * @to: value to copy
 */

void set_string(char **s, char *to)
{
	*s = to;
}
