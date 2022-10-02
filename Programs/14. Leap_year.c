//Leap year conditions:
/* 1. year must be divisible by 4
   2. if it is a century year i.e. 1500,1600 etc.
      must be divisible by 400*/

#include<stdio.h>
int main(){
    int year;
    int result;
    printf("Enter year: ");
    scanf("%d",&year);
    //check divisible by 4
    if(year % 4 == 0){
        //check century year
        if(year % 100 == 0){
            //check divisible by 400
            if(year % 400 == 0)
                result=1;
            else
                result=0;
        }
        else{
            result=1;
        }
    }
    else{
        result=0;
    }

    (result==1) ? printf("leap year\n"):printf("not a leap year\n"); 
    return 0;
}
