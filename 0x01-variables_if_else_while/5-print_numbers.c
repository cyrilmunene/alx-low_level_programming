#include <stdio.h>
/**
 * main - Entry point
 * Print all single digit base 10
 * Followed by a new line
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
