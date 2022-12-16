#include <stdio.h>
/*
 * main - Print alphabet in lowercase
 * followed by a new line, except q and e
 * Description: 'printing'
 * Return: Always 0 (Success)
 */
void main()
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
