struct Student stu_1;

struct Student *p;

p = &stu_1;

printf("No.: %d\n", (*p).num);
printf("name: %s\n", (*p).name);
printf("sex: %c\n", (*p).sex);
printf("score: %c\n", (*p).score);