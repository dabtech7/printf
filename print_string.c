#include "main.h"
#include <stddef.h>

/**
 * print_string - Print a string.
 * @val: Argument.
 *
 * This function takes a variable argument list and prints the string
 * passed as an argument. If the string is NULL, it prints "(null)" instead.
 *
 * Parameters:
 *   val: A variable argument list containing the string to be printed.
 *
 * Return:
 *   Length of the string.
 */
int print_string(va_list val)
{

char *s = va_arg(val, char *);
int len, i;

if (s == NULL)
s = "(null)";

len = _strlen(s);

for (i = 0; i < len; i++)
_putchar(s[i]);

return (len);
}
