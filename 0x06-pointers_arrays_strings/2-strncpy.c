#include "main.h"

/**
<<<<<<< HEAD
* _strncpy - copy a string
* @dest:char
* @src:char
* @n:int
* Return:char
*/

=======
 *_strncpy - function that copies a string
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
>>>>>>> 9c16e98a580cc5bbbeb8999bc1e08d58eb520340
char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	i = 0;
	
	while (i < n && *(src + i))
=======
	for (i = 0; i < n && *(src + i); i++)
>>>>>>> 9c16e98a580cc5bbbeb8999bc1e08d58eb520340
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
