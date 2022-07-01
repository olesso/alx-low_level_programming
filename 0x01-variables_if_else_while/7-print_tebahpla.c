#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Description: main-prints lower case in reverse
 *
 * Return: 0 if success
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}