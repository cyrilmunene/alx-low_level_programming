#include<stdio.h>
/**
 * main - Entry point
 * Print alphabet in lowercase 
 * Then in new line prints in uppercase
 * Return: Always(0)
 */
int main(void)
{
int n = 97;
int N = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	while (N <= 90)
	{
	putchar(N);
	N++;
	}
	putchar ('\n');
	return (0);
}
