#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * 
 * Return: Always 0 
 */
int main(void)
{
	int n;

	for (n = 10; n < 20; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
