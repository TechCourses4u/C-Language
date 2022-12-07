/* Sample program to understand array of structures in C */
#include<stdio.h>
int main(){
    struct Student{
        char name[10];
        int marks;
    };
    struct Student students[5];
    for(int i=0;i<5;i++){
        scanf("%s %d",students[i].name,&students[i].marks);
    }

    printf("Entered data is :\n");
    for(int i=0;i<5;i++){
        printf("%s %d",students[i].name,students[i].marks);
        printf("\n");
    }
    return 0;
}
