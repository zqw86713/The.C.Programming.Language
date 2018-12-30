#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*  void *malloc(size_t size);
 *  *   void *calloc(size_t nitems, size_t size);
 *  */

int main() {

        int *arr;

            /*  allocate the memory for 5 integers containing   garbarage values.  */  
            arr = (int *)malloc(5 * sizeof(int));

                /*  deallocates memory. */
            printf("arr = %x\n", arr);
                free(arr);  


                    /*  allocate the memory for 5 integers and set 0 to all  of them.    */
                    arr = (int *) calloc(5, sizeof(int));

            printf("arr = %x\n", arr);
                        free(arr);



                                    return 0;
}



