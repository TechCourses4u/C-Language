/* 1. Half Pyramid
*
**
***
****
*****
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    for(r = 1; r<=n; r++){
	    for(c=1;c<=r;c++)
            printf("*");
        printf("\n");
    }
    return 0; 
}

/* 2. Inverted Half Pyramid
*****
****
***
**
*
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    for(r = 1; r<=n; r++){
	    for(c=n;c>=r;c--)
            printf("*");
        printf("\n");
    }
    return 0; 
}                   

/* 3. Half Pyramid 180
    *
   **
  ***
 ****
*****
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
            printf("*");
        printf("\n");
    }
    return 0; 
}

/* 4. Inverted Half Pyramid
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    for(r = 1; r<=n; r++){
        //spaces
        for(c=1;c<=r-1;c++)
            printf(" ");
        //*
	    for(c=n;c>=r;c--)
            printf("*");
        printf("\n");
    }
    return 0; 
}

/* 5. Full Pyramid  
    *                   
   *** 
  *****
 *******
*********
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    for(r = 1; r<=n; r++){
        //spaces
        for(c=1;c<=n-r;c++)
            printf(" ");
        //*
	    for(c=1;c<=2*r-1;c++)
            printf("*");
        printf("\n");
    }
    return 0; 
}

/* 6. Inverted Full Pyramid
*********
 *******
  *****
   ***   
    *
*/
#include<stdio.h>
int main(){
    int r,c,n=5;
    int count=2*n-1;
    for(r=1; r<=n; r++){
        //spaces
        for(c=1; c<=r-1;c++)
            printf(" ");
        //*
        for(c=1;c<=count;c++)
            printf("*");
        count-=2;
        printf("\n");
     }
    return 0; 
}

