#include <stdio.h>

#define IN  0 
#define OUT  1

/* create a histogram of word lengths */
int main()

{
int c, i, j, state, nchar;
int lengths[20];

for (i = 0; i < 20; i++)
	lengths[i] = 0;

state = OUT;
nchar = 0;
while ((c = getchar()) != EOF)
	if (c == ' ' || c == '\n' || c == '\t')
	{
		if (state == IN)
			{
			state = OUT;
			lengths[nchar]++;
			nchar = 0;
			}
	}
	else
	{
		{++nchar;}
		if (state == OUT)
			{state = IN;}
	}

printf("----- Histogram -----");
for (i = 0; i < 20; i++)
	{printf("\n %d : ", i);
	for (j = 0; j < lengths[i]; j++){
		putchar('#');
		}}
// printf(", white space = %d, other = %d\n", nwhite, nother);
}