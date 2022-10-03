#include "main.h"
#include <stdlib.h>

/**
 *_strstr - find the first occurence
 *@haystack: string
 *@needle: string
 *
 *Return: the pointer to the first occurence
 */
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{

	int i = 0;
	int j = 0;
	int k, s;

	for (s = 0; needle[s]; s++)
	;
	if (s == 0)
	return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			for (k = i; haystack[k]; k++)
			{
				if (needle[j] == '\0')
					return (&(haystack[i - 1]));
				if (haystack[k] != needle[j])
					break;
				j++;
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}
