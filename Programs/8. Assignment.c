/*Sample program file for Assignment operators*/
#include <stdio.h>
int main()
{
    int a = 20, b = 10, c;
    c = a + b;
    printf("a =%d, b = %d, c = %d \n",a,b,c);
    a+=b;
    printf("a = %d, b = %d \n", a,b);
    a=20,b=10;
    b+=a;
    printf("a = %d, b = %d \n", a,b);
    return 0;
}
