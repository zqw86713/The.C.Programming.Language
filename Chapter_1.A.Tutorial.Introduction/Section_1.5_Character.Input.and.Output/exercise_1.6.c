/* exercise_1.6.c,
 * 
 * read a character, while charater is not end of line indicator, output the
 * character just read.
 *
 */

#include <stdio.h>

/* copy input to ouput; 2nd version.    */
int main()
{
        int c;

        while (c = (getchar() != EOF)) {
                putchar(c);
        }

        return 0;
}
