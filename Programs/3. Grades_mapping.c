#include<stdio.h>
int main(){
    char grades;
    printf(" Enter Grade :\n");
    scanf("%c",&grades);
    if(grades == 'A'){
        printf("Excellent Grade\n");
    }
    else if(grades == 'B'){
        printf("good Grade\n");
    }
    else if(grades == 'C'){
        printf("Average Grade\n");
    }
    else if(grades == 'D'){
        printf("Poor Grade\n");
    }
    else if(grades == 'E'){
        printf("Fail\n");
    }
    else{
        printf("Invalid Grade\n");
    }
    return 0;
}
