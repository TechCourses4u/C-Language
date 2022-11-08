/* Sample program to understand different array notations to access array elements */

#include<stdio.h>
 int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<size;i++){
        printf("%d %d %d %d\n",
        marks[i],*(marks+i),*(i+marks),i[marks]);
    }
    return 0;
}
