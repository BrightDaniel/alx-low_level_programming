#include "main.h"

/**
 *_memcpy - copies bytes from memory area src to memory area dest
 *@dest: destination area memory
 *@src: source memory area
 *@n: data
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
}
