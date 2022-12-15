/* Sample program to understand union in C */
/* Program 1 : Understanding Union */
#include<stdio.h>
union xy{
    int x;
    int y;
};

int main(){
    union xy temp;
    printf("sizeof(xy): %d\n",sizeof(union xy));
    temp.x=4;
    printf("after temp.x=4 : \n");
    printf("x: %d, y: %d\n",temp.x,temp.y);

    temp.y=10;
    printf("after temp.y=10 : \n");
    printf("x: %d, y: %d\n",temp.x,temp.y);

    union xy *ptr = &temp;
    ptr->x = 20;
    printf("accessing via union ptr and union var:\n");
    printf("x: %d, y: %d\n",ptr->x,ptr->y);
    printf("x: %d, y: %d\n",temp.x,temp.y);

    return 0;
}
/* Output :
sizeof(xy): 4
after temp.x=4 : 
x: 4, y: 4
after temp.y=10 :
x: 10, y: 10
accessing via union ptr and union var: 
x: 20, y: 20
x: 20, y: 20
*/

/* Program 2 : size of Union is size of biggest member */
#include<stdio.h>
union xyz{
    char x;
    int y[10];
    double z;
};

int main(){
    printf("sizeof(xyz): %d\n",sizeof(union xyz));
    return 0;
}
/*Output: 
40
*/
