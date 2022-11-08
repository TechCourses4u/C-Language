/* Sample program to understand how to pass 1D array to functions in C */

// Program1 : passing address of 0th element and using pointer arithmetic
#include<stdio.h>
void print(int *j,int size){
    for(int i=0;i<size;i++){
        printf("Address: %u, Value: %d\n",j,*j);
        j++;
    }
}
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    print(&marks[0],size);
    return 0;
}


// Program 3: passing name of aray and using simple array notations (internally pointer arithmetic will take place)
#include<stdio.h>
void print(int j[],int size){
    for(int i=0;i<size;i++){
        printf("Address: %u, Value: %d\n",&j[i],j[i]);
    }
}
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    print(marks,size);
    return 0;
}

// Program3 : Array is always passed by reference
#include<stdio.h>
void print(int j[],int size){
    for(int i=0;i<size;i++){
        printf("Address: %u, Value: %d\n",&j[i],j[i]);
        j[i]=10;

    }
}
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    print(marks,size);
    for(int i=0;i<size;i++){
        printf("Address: %u, Value: %d\n",&marks[i],marks[i]);
    }
    return 0;
}
