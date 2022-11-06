/* Sample Programs to understand Pointer arithmetic in C */

/* Program 1 : Addition/Subtraction of a number from a pointer */

#include<stdio.h>
int main(){
    int i=3;
    int *j=&i;
    char x = 'A';
    char *y=&x;
    printf("value of i: %d\n",i);
    printf("value of x: %d\n",x);
    printf("Address in j: %u\n",j);
    printf("Address in x: %u\n",y);
    j++;
    y++;
    printf("New Address in j: %u\n",j);
    printf("New Address in x: %u\n",y);
    return 0;
}

/* Program 2 : 
1. Subtraction of one pointer from another of same type
2. Comparison of two pointer variables
*/

#include<stdio.h>
int main(){
    int i=3;
    int *j=&i;
    int *k=&i + 4;
    printf("address in j: %u\n",j);
    printf("address in k: %u\n",k);
    printf("Different k-j:%d\n",k-j);
    if(k==j)
        printf("both point to same location\n");
    else
        printf("both point to different location\n");
    return 0;
}

/* Program 3 :  Print elements of array using pointer operations */

#include<stdio.h>
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    int *j=&marks[0];
    for(int i=0;i<size;i++){
        printf("Address: %u, Value: %d\n",j,*j);
        j++;
    }
    return 0;
}
