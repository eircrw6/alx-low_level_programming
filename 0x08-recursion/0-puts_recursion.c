#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function like puts()
 * @s: input
 * Return: Always 0 on sucess
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
