#include "main.h"

/**
 *_strlen - count the length of a string
 *@s: string
 *
 *Return: the value of the length i
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}
