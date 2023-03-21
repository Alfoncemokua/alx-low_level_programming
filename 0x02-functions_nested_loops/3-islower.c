#include "main.h"
/**
 * main - Entry point
 * Description: 'prints a function that checks for lowercase characters.'
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
