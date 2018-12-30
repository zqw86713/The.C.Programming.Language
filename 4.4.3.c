#include <stdbool.h>
#include <stdlib.h>

int main() {
    float score;
    scanf("%f", &score);

    bool a, b;

    a   = score>=60;
    b   = score<=60;

    if (a == true && b == true) {
        printf("The grade is C\n");
    }
    
    max = (a>b) ? a:b;

    return 0;
}
