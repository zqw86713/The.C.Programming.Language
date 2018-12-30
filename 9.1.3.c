/*	struct variable initialization.		*/

#include<stdio.h>

int main(){
	struct Student {
	long int num;
	char name[20];
	char sex;
	char addr[20];
	};
       	struct Student	a = {10101, "Li Lin", 'M', "123 Beijing Road"};
		   
       /*	
	printf("NO.: %d\n", a.num);
	printf("name: %s\n", a.name);
	printf("Sex: %c\n", a.sex);
	printf("addr: %s\n", a.addr);
	*/

	printf("%s\n", a);

	return 0;
}
