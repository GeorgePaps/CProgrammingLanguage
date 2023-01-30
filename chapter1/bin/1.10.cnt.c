
#include <stdio.h>

/* A program that copies its input to its output
and replace each string of one or more blanks with a single blank*/

main()
{
    int prevBlank;
    int c, cnt_blanks;
    prevBlank = 0;
    cnt_blanks = 0;

    while ((c = getchar()) != EOF)
    {   
        if (c == ' ')
        {
            cnt_blanks++; 
        }
        else{
            if (cnt_blanks == 0){
                putchar(c);
            }else if (cnt_blanks == 1){
                putchar(' ');
                putchar(c);
            }
            cnt_blanks=0;
        }
        if (cnt_blanks == 3){
            putchar('\\');
            cnt_blanks=0;
        }
    }
}