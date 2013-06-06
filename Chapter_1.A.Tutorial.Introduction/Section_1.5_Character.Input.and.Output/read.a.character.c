/* read.a.character.c,
 * 
 * read a character, while charater is not end of line indicator, output the
 * character just read.
 *
 */

#include <stdio.h>

/* copy input to ouput; 1st version.    */
int main()
{
        int c;
        c = getchar();
        while (c != EOF) {
                putchar(c);
                c = getchar();
        }

        return 0;
}
