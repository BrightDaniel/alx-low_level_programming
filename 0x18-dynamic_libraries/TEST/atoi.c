#include "main.h"
#include <stdio.h>
/**
 * _atoi - gets sign and numbers of string
 * @s: array
 * Return: gets numbers with its sign
 */
int _atoi(char *s)
{
	unsigned int cont1 = 0, a, b, c, num = 0, tam;
	int aux2 = 1;

	while (*(s + cont1) != '\0')
	{
		cont1++;
	}
	for (a = 0; a < cont1; a++)
	{
		if (*(s + a) >= '0' && *(s + a) <= '9')
			break;
	}
	for (b = a; b < cont1; b++)
	{
		if (!(*(s + b) >= '0' && *(s + b) <= '9'))
			break;
	}
	for (c = 0; c < a; c++)
	{
		if (*(s + c) == '-')
			aux2 = aux2 * (-1);
	}
	tam = b - a;
	while (tam >= 1)
	{
		num = (num * 10) + (*(s + a) - '0');
		a++;
		tam--;
	}
	num = num * aux2;
	return (num);
}
