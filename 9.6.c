#include<stdio.h>

struct Student {
	int num;
	char name[20];
	char sex;
	int age;
};

int main() {
	struct Student *p;
	for (p = stu; p < stu+3; p++) {
		printf("%d %s %c %d", p->num, p->name, p->sex, p->age);
	}
}

p = (struct Student *)stu[0].name;