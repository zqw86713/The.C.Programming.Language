int a = 3;

int *p1 = &a;

char *p2;
void *p3;

p3 = (void *)p1;

p2 = (char *)p3;

printf("%d\n", *p1);

p3 = &a;

p3 = & a;

p3 = (void *)&a;