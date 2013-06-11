/* exercise_1.12.c
 *
 * Qingwei zhang <qzhang.canada@gmail.com>
 * 
 * write a program that prints its input one word per line.
 *
 * program has unfixed bugs.
 *
 * date: 2013-06-10
 */

#include <stdio.h>
#define IN 0    /* IN is used to find whether the current processing position 
                 * is inside a word or not. The following OUT is similar.
                 */
#define OUT 1   /* similar to the above IN.     */ 

int main()
{
        int c = 0;
        int nw = 0;         /* nw is new word.  */
        int status = OUT;     /* status means IN or OUT of a word.    */ 

        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\t' || c == '\n')                            
                        status = OUT;
                else if (status == OUT) {
                        status = IN;
                        putchar(c);
                        nw++;
                }
                else if (status == IN)          /* when the c is a character     */ 
                         putchar(c);            /* status is not OUT, prints the */
                                                /* character.   */ 
                                         
        }
        return 0;
}
