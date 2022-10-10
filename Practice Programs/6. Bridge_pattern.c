/* 1. Bridge Pattern
A        A
AB      BA 
ABC    CBA
ABCD  DCBA               
ABCDEEDCBA
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    int spaces= 8;     //2*n - 2
    for(r=1; r<=n; r++){
        //1st part characters
        for(c=1;c<=r;c++)
            printf("%c",'A'-1 + c);
        //spaces after 1st part
        for(c=1; c<=spaces;c++)
            printf(" ");
        //reduce spaces for next iteration
        spaces-=2; 
        //2nd part characters
        for(c=r;c>=1;c--)
            printf("%c",'A'-1 + c);
        // new line
        printf("\n"); 
     }
    return 0; 
}
