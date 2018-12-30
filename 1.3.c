#include <stdio.h>

int main() {
        int getMax(int x, int y);
            int a, b, max;
                scanf("%d, %d", &a, &b);
                    max = getMax(a,b);

                        printf("max = %d\n", max);

                            return 0;
}

int getMax(int x, int y) {
        int max = 0;
            if ( x > y ) {
                        max = x;    
                            } else {
                                        max = y;
                                            }

                return (max);
}
