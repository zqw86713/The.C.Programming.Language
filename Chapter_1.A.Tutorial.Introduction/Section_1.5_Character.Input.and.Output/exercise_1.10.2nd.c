/* erercise_1.10.c
 *
 * Qingwei zhang <qzhang.canada@gmail.com>
 * 
 * write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. This makes tabs and 
 * backspaces visible in unambiguous way.
 *
 * date: 2013-06-06
 */

#include <stdio.h>

int main()
{
        int c, d;    /* d is used to distinguish if the input is one of tab, 
                      * backslash, or backspace.
                      */ 
        while ((c = getchar()) != EOF) {
                d = 0;

                if (c == '\\') {
                        putchar('\\');      
                        putchar('\\');      
                        d = 1;
                }
                
                if (c == '\t') {
                        putchar('\\');       
                        putchar('t');       
                        d = 1;
                }
               
                /* if (c == '\b') {     */
                if (c == '0x7f') {      /* 0x7f is backspace in ASCII).  */
                        putchar('\\');       
                        putchar('b');
                        d = 1;
                }
                if (d == 0)
                        putchar(c) ;
        }

        
        return 0;
}

