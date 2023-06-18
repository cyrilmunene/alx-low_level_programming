#include <stdio.h>
/**
 * main - Entry point
 * Description:'Print all single digit base 10'
 * Followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
