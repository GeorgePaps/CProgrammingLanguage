
#include <stdio.h>

/* A program that copies its input to its output
and replace each string of one or more blanks with a single blank*/

main()
{
    int prevBlank;
    int c;
    prevBlank = 0;

    while ((c = getchar()) != EOF)
    {   
        if (prevBlank == 1)
        {
            if ( c != ' ')
            {
                putchar(c);
                prevBlank = 0;
            }
            }
        else 
        {
            putchar(c);
            if (c == ' ')
            {
                prevBlank = 1;
            }
        }
    }
}