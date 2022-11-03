/* Sample program to understand what happens if we exceed data type range*/
#include<stdio.h>
int main(){
    char c1 = 129;
    char c2 = -130;
    unsigned char c3 = 129;
    unsigned char c4 = -130;
    unsigned char c5 = 257;

    printf("%d %d %d %d %d\n",c1,c2,c3,c4,c5);
    return 0; 
}

/* Output :
-127 126 129 126 1
*/
