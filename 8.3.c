#include<stdio.h>

int main() {
        void swap1(int *p1, int *p2);
            void swap2(int *p1, int *p2);

                int a , b, c, d;
                    int *pointer_1, *pointer_2, *pointer_3, *pointer_4;

                        printf("Please enter a and b: ");

                            scanf("%d,%d", &a, &b);

                                printf("Please enter c and d: ");

                                    scanf("%d,%d", &c, &d);

                                        pointer_1 = &a;
                                            pointer_2 = &b;

                                                if (a<b) {
                                                            swap1(pointer_1, pointer_2);
                                                                }

                                                    pointer_3 = &c;
                                                        pointer_4 = &d;

                                                            if (c<d) {
                                                                        swap2(pointer_3, pointer_4);
                                                                            }

                                                                printf("max=%d, min=%d\n", a, b);
                                                                    printf("max=%d, min=%d\n", c, d);
                                                                        return 0;
}

void swap1(int *p1, int *p2) {
        int temp;
            temp = *p1;
                *p1 = *p2;
                    *p2 = temp;
}


/*  it is a wrong way.
 *  *   this is another version of swap().  
 *  */

void swap2(int *p1, int *p2) {
        int *ptemp; 
            ptemp = p1;
                p1 = p2;
                    p2 = ptemp;

}
