#include <stdio.h>
#include <stdlib.h>

int main() {
           printf("char = %d\n", sizeof(char)) ;
           printf("int = %d\n", sizeof(int));
           printf("float = %d\n", sizeof(float));
           printf("double = %d\n", sizeof(double));

        int a = 0;
            double d = 10.21;
                printf("size of (int + double) = %d\n", sizeof(a+d));

                    int arr[] = {1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14};
                        printf("Number of elements : %d\n ", sizeof(arr)/sizeof(arr[0]));

                            int *ptr = malloc(10 * sizeof(int));

        return 0;
}
