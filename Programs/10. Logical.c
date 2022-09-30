/*Sample program file for logical operators in c*/
#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 0;
    printf("1st: %d \n", (a==10) && (b==20));
    printf("2nd: %d \n", (a==10) && (b==10));
    printf("3rd: %d \n", (a==10) || (b==10));
    printf("4th: %d \n", !(a==10));
    printf("5th: %d \n", (a==10) && c);
    printf("6th: %d \n", !(a == b));
    return 0;
}
