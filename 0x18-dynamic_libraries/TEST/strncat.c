#include "main.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; j < n && src[j] != '\0'; j++)

dest[j + 1] = src[i];
dest[j + i + 1] = '\0';

return (dest);
}
