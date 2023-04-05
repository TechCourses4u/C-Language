/* Sample program to understand Wild, NULL and Dangling pointers in C */
#include<stdio.h>
#include<stdlib.h>
int main(){
    //wild pointer
    int a = 10;
    int *p;       // wild pointer
    p = &a;       // not a wild pointer anymore
    printf("value of a : %d\n",*p);

    //NULL pointer
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    int *ptr3;
    if(ptr1 == NULL)
        printf("ptr1 is NULL\n");
    if(ptr1 == ptr2)
        printf("ptr1 is equal to ptr2\n");
    if(ptr1 == ptr3)
        printf("ptr1 is equal to ptr3\n");

    // Dangling pointer
    int *ptr4 = (int*) malloc(2 * sizeof(int));
    ptr4[0] = 10;
    ptr4[1] = 20;
    printf("%d %d\n",ptr4[0],ptr4[1]);
    free(ptr4);     // ptr4 is now dangling pointer
    ptr4 = NULL;    // not a dangling pointer anymore 
    return 0;
}

/* Output :
value of a : 10
ptr1 is NULL
ptr1 is equal to ptr2
10 20
*/
