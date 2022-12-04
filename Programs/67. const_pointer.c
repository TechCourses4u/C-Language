/* Sample programs to understand const keyword with pointers in C*/

/* Program 1: const pointer */
#include<stdio.h>

int main(){
    int i=10;
    int j=20;

    int *const ptr=&i;
    printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    
    //ptr=&j;
    //printf("ptr:%u, *ptr:%d\n",ptr,*ptr);

    *ptr = 30;
    printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    return 0;
}

/* Program 2: pointer to a constant */
#include<stdio.h>

int main(){
    int i=10;
    int j=20;

    const int *ptr=&i;
    printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    
    ptr=&j;
    printf("ptr:%u, *ptr:%d\n",ptr,*ptr);

    //*ptr = 30;
    //printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    return 0;
}

/* Program 3: const pointer to a constnat */
#include<stdio.h>
int main(){
    int i=10;
    int j=20;

    const int *const ptr =&i;
    printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    
    //ptr=&j;
    //printf("ptr:%u, *ptr:%d\n",ptr,*ptr);

    //*ptr = 30;
    //printf("ptr:%u, *ptr:%d\n",ptr,*ptr);
    return 0;
}
