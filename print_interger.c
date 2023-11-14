#include "main.h"

/**
 * print_number - Helper function to print an integer.
 * @num: Integer to print.
 * Return: Number of digits printed.
 */
int print_number(int num)
{
	int digit, count = 0;
	int is_negative = 0;

	if (num < 0)
	{
		_putchar('-');
		is_negative = 1;
	}

	if (num != 0)
	{
		int exp = 1;
		int temp_num = num;

		while (temp_num / 10 != 0)
		{
			exp *= 10;
			temp_num /= 10;
		}

		temp_num = num;
		while (exp > 0)
		{
			digit = temp_num / exp;
			_putchar(abs(digit) + '0');
			temp_num %= exp;
			exp /= 10;
			count++;
		}
	}

	_putchar(abs(num % 10) + '0');

	return (is_negative ? count + 1 : count);
}

/**
 * print_i - Prints integer.
 * @args: Argument to print.
 * Return: Number of digits printed.
 */
int print_i(va_list args)
{
	return (print_number(va_arg(args, int)));
}

/**
 * print_d - Prints decimal.
 * @args: Argument to print.
 * Return: Number of digits printed.
 */
int print_d(va_list args)
{
	return (print_number(va_arg(args, int)));
}
