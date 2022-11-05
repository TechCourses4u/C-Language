/* Sample programs to understand Designated initialization of arrays in C*/

//1. Initializing particular elements
#include<stdio.h>
int main(){
    int marks[10]={[6]=40,35,[2]=35,39};
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}

//2. Assigngin same value to multiple elements
#include<stdio.h>
int main(){
    int marks[10]={30,35,[3 ... 5]=25,[8]=40,49};
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}
