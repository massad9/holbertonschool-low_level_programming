#include <limits.h>
#include "main.h"

/**
 * atoi_convert - Converts the digit sequence safely.
 * @s: The digit sequence.
 * @sign: The number sign.
 *
 * Return: The converted integer.
 */
static int atoi_convert(char *s, int sign)
{
	int result, digit, limit, multmin;

	result = 0;
	limit = (sign < 0) ? INT_MIN : -INT_MAX;
	multmin = limit / 10;

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (result < multmin)
			return ((sign < 0) ? INT_MIN : INT_MAX);
		result *= 10;
		if (result < limit + digit)
			return ((sign < 0) ? INT_MIN : INT_MAX);
		result -= digit;
		s++;
	}
	return ((sign < 0) ? result : -result);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign;

	sign = 1;
	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	if (*s == '\0')
		return (0);
	return (atoi_convert(s, sign));
}
