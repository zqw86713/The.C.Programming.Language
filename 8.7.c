#include<stdio.h>

int main() {
        int i;
            int a[10];

                int *p = a;

                    printf("Please enter 10 integer numbers: ");

                        for (i = 0; i<10; i++) {
                                    scanf("%d", p++);
                                        }

                              p = a;

                                for (i = 0; i < 10; i++, p++ ) {
                                            printf("%d ", *p);
                                                }

                                    printf("\n");
                                        return 0;
}


