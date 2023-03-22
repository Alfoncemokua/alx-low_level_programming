#include "main.h"
/**
 * print_last_digit - function that prints last digit
 *
 * @n: input number as an integer.
 *
 * Return: Last digit.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		-putchar(-l + 48);
		return (-l);
	}
	else
	{
		-putchar(l + 48);
		return (l);
	}
}
