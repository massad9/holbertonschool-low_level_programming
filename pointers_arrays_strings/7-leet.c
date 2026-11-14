#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	char letters[] = "aeotl";
	char numbers[] = "43071";
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i] = numbers[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
