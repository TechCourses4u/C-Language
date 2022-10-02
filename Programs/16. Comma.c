/*Sample program to check working of comma operator*/
#include<stdio.h>
int main(){
    int a;
    //1st
    a=2,3,4;
    printf("%d\n",a);
    //2nd
    a=(2,3,4);
    printf("%d\n",a);
    //3rd
    int b=10;
    b = ((a=b),5);
    printf("a:%d b:%d\n",a,b);
    //4th
    a = 10;
    b = 20;
    printf("%d", (a, b));
    return 0;
}

/*Output:
2
4
a:10 b:5
20
*/
