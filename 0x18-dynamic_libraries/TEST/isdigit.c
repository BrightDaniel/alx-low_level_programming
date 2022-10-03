#include "main.h"

/**
 *_isdigit - function to check for digit
 *@c: integer
 *Return: a
 */

int _isdigit(int c)
{
int a = 0;

if (c >= 48 && c <= 57)
a = 1;
return (a);
}
