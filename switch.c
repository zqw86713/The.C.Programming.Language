#include <stdio.h>

int main() {
        char grade;
            scanf("%c", &grade);
                printf("Your score:");
                    switch(grade) {
                                case 'A': {
                                                        printf("85~100\n");
                                                                    break;
                                                                            }
                                                case 'B': {
                                                                        printf("70~84\n");
                                                                                    break;
                                                                                            }
                                                                default: {
                                                                                        printf("Enter data error!\n");
                                                                                                }
                                                                            }

}
