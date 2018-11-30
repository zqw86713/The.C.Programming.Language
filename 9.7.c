#include<stdio.h>
#define N 3

struct Student {
	int num;
	char name[20];
	float score[3];	/* 	scores for three courses.	*/
	float aver;	/* 	average scores.	*/
};

int main() {
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu);

	struct Student stu[N];
	struct Student *p = stu;
	struct Student *pmax = NULL;
	input(p);
	pmax = max(p);
	
	print(pmax));
	return 0;
}

void print(struct Student stu) {
	int i;
	printf("Please input  data: \n");
	for (i = 0; i < N; i++) {
		scanf("%d %s %f %f", &stu[i].num, stu[i].name, &stu[i].score[0],&stu[i].score[1], &stu[i].score[2],);
	stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;

	}

}

struct Student max(struct Student stu[]) {
	int i;
	int m = 0;
	
	for (i = 0; i < N; i++) {
		if (stu[i].aver > stu[m].aver ) {
			m = i;
		}
	return stu[m];

	}
}

void print (Struct Student stud) {
	printf("", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}