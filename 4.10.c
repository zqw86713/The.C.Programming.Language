#include<stdio.h>

int main() {

    int c, s;
    float p, w, d, f;

    printf("please enter price , weight, discount: \n");
    scanf("%f,%f,%f,%d", &p, &w, &s);

    if (s>=3000)    {
        c = 15;
    }   else    {
        c = s/250;
    }

    switch(c) {
        case 0: {   d = 0;
                    break;
                }
        case 1: {   d = 2;
                    break;
                }
        case 2:
        case 3: {   d = 5;
                    break;
                }

        default: {  d = 10;
                    break;
                 }
    }
    f = p * w * s* (1 - d / 100);
    printf("");
    return 0;


}
