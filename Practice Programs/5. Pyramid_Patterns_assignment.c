/* 1. Full Pyramid with spaces
    * 
   * *
  * * *
 * * * *
* * * * *
*/

#include<stdio.h>
int main(){
    int r, c,n=5;
    for(int r = 1; r<=n; r++){
        //spaces
	    for(c=1;c<=n-r;c++)
            printf(" ");
        //*
        for(c=1;c<=r;c++)
            printf("* ");
        printf("\n");
    }
    return 0; 
}

/* 2. Numbers Pyramid
   1   
  2 3 
 4 5 6 
7 8 9 10
*/

#include<stdio.h>
int main(){
    int r;
    int c;
    int n=4;
    int num=1;
    for(r=1; r<=n; r++){
        //spaces
        for(c=1; c<=n-r;c++)
            printf(" ");
        //number
        for(c=1;c<=r;c++){
            printf("%d ",num);
            num++;
        }
        //new line
        printf("\n"); 
     }
    return 0; 
}
