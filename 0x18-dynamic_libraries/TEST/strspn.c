#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 *@s: string
 *@accept: string
 *
 *Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;

for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
break;
}
if (s[a] != accept[b])
break;
}
return (a);
}
