#include <stdio.h>


/* create a histogram for character count */
int main()

{
	int c, i, j;
	int lengths[26];

	for (i = 0; i < 26; i++)
		lengths[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= 'a' && c <= 'z')
		{
			lengths[c - 'a']++;
		}

	printf("----- Histogram -----");

	for (i = 0; i < 26; i++)
		{
			printf("\n %c : ", 'a' + i);
			for (j = 0; j < lengths[i]; j++){
				putchar('#');
			}
		}
	putchar('\n');
}