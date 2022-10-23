/* Sample program to understand pointers in C */
#include<stdio.h>
int main(){
    int i = 5;
    int *j = &i;
    int **k = &j;
    printf("value of i is %d\n",i);
    printf("value of i is %d\n",*&i);
    printf("value of i is %d\n",*j);
    printf("value of i is %d\n",*(*&j));
    printf("value of i is %d\n",*(*k));
    printf("value of i is %d\n",**k);
    printf("------------------\n");
    printf("address of i is %u\n",&i);
    printf("value of j is %u\n",j);
    printf("------------------\n");
    printf("address of j is %u\n",&j);
    printf("value of k is %u\n",k);
    printf("------------------\n");
    printf("address of k is %u\n",&k);
    return 0;
}

/*
Output:
value of i is 5
value of i is 5
value of i is 5
value of i is 5
value of i is 5
value of i is 5
------------------
address of i is 6618652
value of j is 6618652
------------------
address of j is 6618640
value of k is 6618640
------------------
address of k is 6618632
*/
