/* Sample Program to explain and experiment with nested if else conditions */
#include<stdio.h>
int main(){
    int raining;
    int want_to_bath;
    int want_to_rest;
    printf(" Enter 1 if raining,otherwise enter 0\n");
    scanf("%d",&raining);
    if(raining){
        printf(" Enter 1 want to bath, otherwise enter 0\n");
        scanf("%d",&want_to_bath);
        if(want_to_bath){
            printf("go out and bath in rain");
        }
        else{
            printf("stay home");
        }
    }
    else{
        printf(" Enter 1 want to bath, otherwise enter 0\n");
        scanf("%d\n",&want_to_rest);
        if(want_to_rest){
            printf("stay home");
        }
        else{
            printf("go shopping");
        }
    }
    return 0;
}
