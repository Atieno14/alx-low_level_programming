#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program prints the alphabet a-z in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
