#include <stdio.h>
/**
*main - display outcome
*Description: alphabet in lowercase
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if((ch != 'e')&&(ch != 'q'));
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
