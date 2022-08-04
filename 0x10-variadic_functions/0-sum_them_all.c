#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a code that writes the sum of its parameters.
 * @n: num of parameters
 * Return: Sum them all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int i, sum;

	va_start(param, n); /*Macro to intialize the argument in the parameter*/
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(param, n);  /*Get the next parameter in the function*/
	va_end(param); /*Macro to end the var fun*/
	return (sum);
}
