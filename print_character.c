#include "main.h"

/**
 * print_character - Print a character.
 * @args: Arguments.
 *
 * Return: Number of characters printed (always 1 for a single character).
 */
int print_character(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	return 1;
}
