/*Program to map marks obtained to grades*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>90){
        printf("excellent grade\n");
    } else if(marks>70 && marks<=90){
        printf("Good grade\n");
    } else if(marks>50 && marks<=70){
        printf("Average grade\n");
    } else if(marks>30 && marks<=50){
        printf("Poor grade\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}
