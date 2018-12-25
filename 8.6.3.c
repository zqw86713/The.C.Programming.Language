#include <stdio.h>

int main() {
	int a[10];
	int *p;
	int i;
	printf("Please enter 10 interger numbers: ");

	for (i = 0; i<10 ; i++) {
		scanf("%d", &a[i]);
	}

	for (p=a; p<(a+10); p++) {
		printf("%d ", *p);
	}

	printf("\n");

	return 0;
}