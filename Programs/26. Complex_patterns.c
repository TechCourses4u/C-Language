/* 1. Reverse Bridge  
ABCDEEDCBA
ABCD  DCBA 
ABC    CBA
AB      BA               
A        A
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    int count=5;
    int spaces=0;
    for(r=1; r<=n; r++){
        //1st part characters
        for(c=1;c<=count;c++)
            printf("%c",'A'-1+c);
        //spaces after 1st part
        for(c=1; c<=spaces;c++)
            printf(" ");
        //increase spaces for next iteration
        spaces+=2;
        //2nd part characters
        for(c=count;c>=1;c--)
            printf("%c",'A'-1+c);
        count--;
        //new line
        printf("\n");
     }
    return 0; 
}

/* 2. Heart
  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/

#include<stdio.h>
int main()
{
    int r, c;
    int count = 5;
    int top_rows=3;
    int spaces_after_peak1 = 2* top_rows-1;
    int bottom_rows=10;
   
    // Top Part of Heart
    for(r = 1; r<=top_rows;r++){
        //spaces before peak 1
        for(c=1;c<=top_rows-r;c++)
            printf(" ");
        //peak 1
        for(c=1;c<=count;c++)
            printf("*");
        //spaces after peak 1
        for(c=1;c<=spaces_after_peak1;c++)
            printf(" ");
        spaces_after_peak1-=2;
        //peak 2
        for(c=1;c<=count;c++)
            printf("*");
        count+=2;
        printf("\n");
    }
    //Bottom Part of Heart
    count=2*bottom_rows-1;
    for(r=1; r<=bottom_rows; r++){
        //spaces
        for(c=1; c<r;c++)
            printf(" ");
        //*
        for(c=1;c<=count;c++)
            printf("*");
        count-=2;
        // new line
        printf("\n"); 
     }
}
