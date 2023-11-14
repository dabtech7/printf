#include "main.h"

/**
 * print_string - Print a string with a personalized touch.
 * @format: The format specifier.
 * Return: The length of the string.
 */
int print_string(va_list format)
{
	char *inputString;
	int index, length;

	inputString = va_arg(format, char *);

	if (inputString == NULL)
	{
		inputString = "(null)";
		length = strLen(inputString);

		for (index = 0; index < length; index++)
	{
		_putchar(inputString[index]);
	}

		return (length);
	}
	else
	{
		length = strLen(inputString);

		for (index = 0; index < length; index++)
	{
		_putchar(inputString[index]);
	}

		return (length);
	}
}
