
#include <stdio.h>

/* A program that counts blanks, line breaks and tabs*/
main()
{
    float c, countBlanks, countLines, countTabs;
    countBlanks = 0;
    countLines = 0;
    countTabs = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++countBlanks;
        }
        if (c == '\t')
        {
            ++countTabs;
        }
        if (c == '\n')
        {
            ++countLines;
        }

    }
    printf("%.0f", countBlanks);
    printf(" # of Blanks\n");
    printf("%.0f", countTabs);
    printf(" # of Tabs\n");
    printf("%.0f", countLines);
    printf(" # of line breaks\n");
}