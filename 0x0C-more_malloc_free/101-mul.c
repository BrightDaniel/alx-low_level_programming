#include<string.h>
#include "main.h"

/**
 * isnumber - checks if a string is a number
 * @s: pointer to string
 * Return: 1 if s is a number 0 otherwise
 */
int isnumber(char *s)
{
	while (*s)
	{
		if (*s > 58 || *s < 48)
			return (0);
		s++;
	}
	return (1);
}

/**
 * mul2 - multiply two numbers
 * @s1: first number
 * @s2: second number
 * Return: pointer to result
 */
char *mul2(char *s1, char *s2)
{
	int l1, l2, sum = 0, cry = 0, *res, i,
	    j, n1, n2, r1 = 0, r2 = 0;
	char *ans;

	if (!isnumber(s1) || !isnumber(s2))
		return (NULL);
	l1 = strlen(s1);
	l2 = strlen(s2);
	res = malloc((l1 + l2) * sizeof(*res));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < l1 + l2; i++)
		res[i] = 0;
	for (i = l1 - 1; i >= 0; i--)
	{
		n1 = s1[i] - '0';
		r2 = 0;
		cry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			n2 = s2[j] - '0';
			sum = (n1 * n2) + res[r1 + r2] + cry;
			res[r1 + r2] = sum % 10;
			cry = sum / 10;
			r2++;
		}
		if (cry > 0)
			res[r1 + r2] += cry;
		r1++;
	}
	i = l1 + l2 - 1;
	while (res[i] == 0 && i >= 0)
		i--;
	if (i < 0)
		return ("0");
	ans = malloc(sizeof(*ans) * (i + 2));
	for (j = 0; i >= 0; j++, i--)
		ans[j] = res[i] + '0';
	ans[j] = '\0';
	return (ans);
}

/**
 * print - prints a string
 * @s: string to print
 */
void print(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 success 98 error
 */
int main(int argc, char **argv)
{
	char *res;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	res = mul2(argv[1], argv[2]);
	if (res == NULL)
	{
		print("Error");
		exit(98);
	}
	print(res);
	return (0);
}
