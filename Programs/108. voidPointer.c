/* Sample program to understand void pointer in c */
#include<stdio.h>
int main(){
    int a = 10;
    void *vp = &a;

    printf("sizeof(void) : %d\n",sizeof(void));         // in gcc, sizeof(void) is 1
    printf("sizeof(void*) : %d\n",sizeof(void*));
    printf("sizeof(vp) : %d\n",sizeof(vp));

    printf("initial address and value : %u %d\n",vp,*(int*)vp);
    vp = vp+1;        // should not be used, not all compilers allow this
    printf("address with no typecast addition : %u\n",vp);
    vp = (int *)vp + 1;     // ok
    printf("address with typecast addition : %u\n",vp);
    return 0;
}

/* Output :
sizeof(void) : 1
sizeof(void*) : 8
sizeof(vp) : 8
initial address and value : 6618644 10  
address with no typecast addition : 6618645
address with typecast addition : 6618649
*/
