/* word.counting.c
 *
 * Qingwei Zhang <qzhang.canada@gmail.com>
 * 
 * count lines, words, and characters in input. 
 * date: 2013-06-06
 */

#include <stdio.h>
#define IN 1    /* inside a word.       */
#define OUT 0   /* outside a word.      */

int main()
{
        int c, nl, nw, nc, state;       /* nl is newline, nw is new word,
                                        * nc is new count, state is the 
                                        * status.
                                        */
        state = OUT;
        nl = nw = nc = 0;
        while ((c = getchar()) != EOF) {
                ++nc;
                if (c == '\n')
                        ++nl;
                if (c == ' '|| c == '\n' || c == '\t')
                        state = OUT;
                else if (state == OUT) {
                        state = IN;
                        ++nw;
                }
        }
        printf("nl = %d, nw = %d, nc = %d.\n", nl, nw, nc);
        
        return 0;
}
