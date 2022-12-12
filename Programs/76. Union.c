/* Sample program to understand union in C */
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
