#include <stdio.h>

/* You can send EOF in the terminal through ctrl+d in windows */

int main()
{
	int c;
	c = getchar() != EOF;
	printf("%d\n", c);
}