#include "variadic_functions.h"

/**
 * sum_them_all - a code that writes the sum of its parameters.
 * @n: num of parameters
 * Return: Sum them all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list param;

	va_start(param, n); /*Macro to intialize the argument in the parameter*/
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);  /*Get the next parameter in the function*/
	va_end(param); /*Macro to end the var fun*/
	return (sum);
}
