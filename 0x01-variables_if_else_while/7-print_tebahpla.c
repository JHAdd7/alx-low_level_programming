#include <stdio.h>
/**
 * main - Prints the lowercase of the alphabet in reverse
 * Return: Alwasy 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
