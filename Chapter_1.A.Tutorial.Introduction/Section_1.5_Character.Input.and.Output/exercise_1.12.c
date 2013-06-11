/* exercise_1.12.c
 *
 * Qingwei zhang <qzhang.canada@gmail.com>
 * 
 * write a program that prints its input one word per line.
 *
 * date: 2013-06-10
 */

#include <stdio.h>
#define IN 0    /* inside a word.       */
#define OUT 1   /* outside a word.      */ 

int main()
{
        int c = 0;
        int nw = 0;             /* nw is new word.  */
        int nl = 0;             /* nl is new line.  */
        int nc = 0;             /* nc is new character.  */
        int status = OUT;     /* status means IN or OUT of a word.    */ 

        while ((c = getchar()) != EOF) {
                ++nc;
                if (c == '\n')
                        ++nl;
                if (c == ' ' || c == '\n' || c == '\t') {
                        if (status == IN) {     /* previous word ends.  */
                                printf("\n");
                                status = OUT;
                        }
                } else if (status == OUT) {     /* c is a character.    */
                        status = IN;
                        ++nw; 
                        putchar(c);
                } else if (status == IN) {      /* a word is continuing.*/
                        putchar(c);
                }

        }
       return 0;
}
