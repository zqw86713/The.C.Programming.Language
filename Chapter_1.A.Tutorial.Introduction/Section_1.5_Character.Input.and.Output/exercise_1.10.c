/* erercise_1.10.c
 *
 * Qingwei zhang <qzhang.canada@gmail.com>
 * 
 * write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. This makes tabs and 
 * backspaces visible in unambiguous way.
 *
 * program has bug, problem unsolved.
 *
 * date: 2013-06-06
 */

#include <stdio.h>

int main()
{
        int c;     
        while ((c = getchar()) != EOF) {
                if (c == '\\')
                        /* putchar('\\');       */
                        printf("\\");
                else if (c == '\t')
                        /* putchar('\t');       */
                        printf("\t");
                else if (c == '\b')
                        /* putchar('\b');       */
                        printf("\b");
                else
                        putchar(c) ;
        }

        
        return 0;
}

