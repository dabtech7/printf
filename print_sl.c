#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @s: String.
 * Return: Integer.
 */
int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}

