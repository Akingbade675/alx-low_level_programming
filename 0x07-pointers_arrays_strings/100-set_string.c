#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: replace the value of a double pointer
 * @to: replace s with the bytes pointed by to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
