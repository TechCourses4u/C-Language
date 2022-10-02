/*Leap year conditions:
   1. year must be divisible by 4
   2. if it is a century year i.e. 1500,1600 etc.
      must be divisible by 400*/

#include<stdio.h>
int main(){
    int year;
    int result;
    printf("Enter year: ");
    scanf("%d",&year);
    result = (year%4==0)?(year%100==0)?(year%400==0)?1:0 :1 :0;

    result==1 ? printf("leap year"):printf("not a leap year");
    return 0;
}
