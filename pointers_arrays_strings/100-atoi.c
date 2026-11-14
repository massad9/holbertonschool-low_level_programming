#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;
	int limit;
	int multmin;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	if (s[i] == '\0')
		return (0);

	limit = (sign < 0) ? INT_MIN : -INT_MAX;
	multmin = limit / 10;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < multmin)
			return ((sign < 0) ? INT_MIN : INT_MAX);

		result *= 10;

		if (result < limit + digit)
			return ((sign < 0) ? INT_MIN : INT_MAX);

		result -= digit;
		i++;
	}

	if (sign < 0)
		return (result);

	return (-result);
}
