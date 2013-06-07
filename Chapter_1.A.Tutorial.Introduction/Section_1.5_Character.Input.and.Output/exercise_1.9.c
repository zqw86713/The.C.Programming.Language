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
        int inspace = 0;       /* to test if the previous one is space too.    */
        
        while ((c = getchar()) != EOF) {
                if (c == ' ') {
                        if (0 == inspace) {
                                inspace = 1;
                                putchar(c);
                        }
                } else {
                        if (c != ' ') {
                                putchar(c);
                                inspace = 0;
                        }
                }
        }

        return 0;
}

