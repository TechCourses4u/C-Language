/* Write a program to map month number to their name.
 * For eg - 1 - January 2- February and so on
*/
#include<stdio.h>
int main(){
    int month;
    printf(" Enter month :\n");
    scanf("%d",&month);
    if(month == 1){
        printf("Januaray\n");
    } else if(month == 2){
        printf("February\n");
    } else if(month == 3){
        printf("March\n");
    } else if(month == 4){
        printf("April\n");
    } else if(month == 5){
        printf("May\n");
    } else if(month == 6){
        printf("June\n");
    } else if(month == 7){
        printf("July\n");
    } else if(month == 8){
        printf("August\n");
    } else if(month == 9){
        printf("September\n");
    } else if(month == 10){
        printf("October\n");
    } else if(month == 11){
        printf("November\n");
    } else if(month == 12){
        printf("December\n");
    } else{
        printf("Invalid month\n");
    }
    return 0;
}
