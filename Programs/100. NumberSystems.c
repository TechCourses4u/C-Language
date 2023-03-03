/* Sample program to represent same number in different number systems in C */
#include<stdio.h>
int main(){
    int num = 26;
    printf("decimal : %d\n",num);
    printf("octal : %o\n",num);
    printf("hexadecimal (small) : 0x%x\n",num);
    printf("hexadecimal (capital) : 0x%X\n",num);
    return 0;
}

/* Output : 
decimal : 26
octal : 32
hexadecimal (small) : 0x1a
hexadecimal (capital) : 0x1A
*/
