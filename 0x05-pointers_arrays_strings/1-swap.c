#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* Owned by Bwave/Bright
* @a: first int
* @b: second int
* Return 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
