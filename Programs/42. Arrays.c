/* Sample programs to understand Arrays in C*/

//1. Array declaratoin and initializaton
#include<stdio.h>
int main(){
    int marks[] = {30,35,25,40,46,17,39,40,50,47};
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}

//2. Array initialization using loops
#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter marks:");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}

//3. partial initialization
#include<stdio.h>
int main(){
    int marks[10] = {30,35,25,40,46};
    for(int i=0;i<10;i++){
        printf("%d\n",marks[i]);
    }
    return 0;
}

//4. Contiguous Memory Allocation
#include<stdio.h>
int main(){
    int marks[10] = {30,35,25,40,46,17,39,40,50,47};
    for(int i=0;i<10;i++){
        printf("i: %d, Address: %u, Value: %d\n",
                i,&marks[i],marks[i]);
    }
    return 0;
}

//5. find no of elements in array
#include<stdio.h>
int main(){
    int marks[] = {30,35,25,40,45,17,39,40,50,47};
    int size = sizeof(marks)/sizeof(marks[0]);
    printf("Array size: %d\n",sizeof(marks));
    printf("Element size: %d\n",sizeof(marks[0]));
    printf("No of elements: %d\n",size);

    return 0;
}

//6. bounds check
#include<stdio.h>
int main(){
    int marks[10] = {30,35,25,40,45,17,39,40,50,47};
    marks[10]=40;
    printf("%d\n",marks[10]);
    return 0;
}

//7. Sum of array elements
#include<stdio.h>
int main(){
    int marks[10] = {30,35,25,40,46,17,39,40,50,47};
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=marks[i];
    }
    printf("sum is %d\n",sum);
    return 0;
}
