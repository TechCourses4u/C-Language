/* Write a program to check marriage eligibility in India as per current rule in sep,2022*/
#include<stdio.h>
int main(){
    char gender;
    int age;
    printf(" Enter gender and age\n");
    scanf("%c %d",&gender,&age);
    if(gender == 'M'){
        if(age>=21){
            printf("eligible for marriage");
        }
        else{
            printf("not eligible for marriage");
        }
    }
    else{
        if(age>=18){
            printf("eligible for marriage");
        }
        else{
            printf("not eligible for marriage");
        }
    }
    return 0;
}
