/* erercise_1.9.c
 *
 * write a program to copy its input to its output, replacing each string of 
 * one or more blanks by a single blank.
 * 
 * date: 2013-06-06
 */

#include <stdio.h>

int main()
{
        int c;
        int pc = EOF;           /* c = character, pc = previous 
                                *   character.      
                                */     
        
        while ((c = getchar()) != EOF) {
                if (c == ' ') { 
                        if (pc != ' ');
                                putchar(c); 
                }

                if (c != ' ') 
                        putchar(c);
                pc = c;
        }

        return 0;
}

