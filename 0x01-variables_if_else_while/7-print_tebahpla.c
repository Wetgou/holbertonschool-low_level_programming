#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* get LastDigit of random number "n"  and set his position */
	int i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 26; i > 0  ; i--)
		putchar(alpha[i - 1]);

	putchar('\n');

	return (0);
}
