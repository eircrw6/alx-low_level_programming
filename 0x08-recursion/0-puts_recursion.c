#include "main.h"
/**
 * _puts_recursion - function like puts()
 * @s: input
 * Return: Always 0 on sucess
 */
void_puts_recursion(char *)
{
	if (*s)
	{
		_putchar(*s)
		_puts_recursion(s + 1)
	}
	else
	{
		_putchar('\n');
	}

}
