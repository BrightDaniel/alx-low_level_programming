#include "holberton.h"

/**
* _atoi - convers a string to an int
* @s: a pointer to a string guven by main
* Bwave
* Description: making our own atoi function
* Return: returns 0 if no numbers and the result if numbers
*/

int _atoi(char *s)
{
	int counter = 0;/* A */
	int i = 0;
	unsigned int result = 0;
	int sign = 0;

	while (s[counter] != '\0')/* B */
	{
		if (s[counter] == '-')/* C */
			sign++;
		if (s[counter] >= 48 && s[counter] <= 57)/* D */
		{
			i++;
			result = result * 10 + s[counter] - '0';/* E */
		}
		if (i > 0 && (s[counter] < 48 || s[counter] > 57))/* F */
			break;
	counter++;/* G */
	}
	if (i == 0)/* H */
		return (0);
	if (sign % 2 == 0)/* I */
		return (result);
	return (result * -1);/* J */
}
