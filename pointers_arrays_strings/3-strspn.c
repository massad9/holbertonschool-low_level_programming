#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The accepted characters.
 *
 * Return: Number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found;

	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			break;
		i++;
	}
	return (i);
}
