/* erercise_1.8.c
 *
 * count blanks, tabs, and lines in input.
 */

#include <stdio.h>

int main()
{
        int c, bl, tab, nl;     /* bl is blanks, tab is tabs, 
                                 * nl is new lines. 
                                 */  
        bl = tab = nl = 0;

        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        ++bl;
                else if (c == '\t')
                        ++tab;
                else if (c == '\n')
                        ++nl;
                else
                        ;
        }

        printf("blank: %d\ntab: %d\nnewline: %d\n", bl, tab, nl);
        
        return 0;
}

