#include "main.h"

/**
 * is_separator - Checks if a character separates words.
 * @c: The character to check.
 *
 * Return: 1 if separator, otherwise 0.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	i = 0;
	while (separators[i] != '\0')
	{
		if (c == separators[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes the first letter of every word.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || is_separator(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
