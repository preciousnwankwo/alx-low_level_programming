#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: input string
 * @needle: substring to search for
 *
 * Return: Pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
