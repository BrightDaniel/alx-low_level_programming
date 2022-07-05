#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 * Originally, the header file i used in main.h was
 * int _putchar (char *)
 * this is because i wanted my output to be
 * a string of _putchar and i wont type so much
 * and so my original description was
 *
 * char *x;
 *
 * x = "_putchar";
 * printf("%s\n", x);
 *
 * and it worked
 * but on getting to Task 1, i realised
 * i still need to use the function _putchar and
 * it can only print out a char
 * so my code had to be modified to this...
 *
 * by HilarySmartt
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
