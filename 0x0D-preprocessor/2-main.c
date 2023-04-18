#include <stdio.h>

/**
 * main - the fiunction that prints name of the file it was compiled from
 *
 * Return: 0 On sucess
 **/
int main(void)
{
	printf("%s\n", __FILE__);
	return(0);
}
