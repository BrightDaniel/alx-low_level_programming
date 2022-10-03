#include "main.h"
#include <ctype.h>
/**
 *_islower - check for lowercase alphabet
 *@c: the character to print
 *Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}

