/* Sample programs to understand goto keyword in C*/

//Program 1:
#include<stdio.h>
int main(){
    int n=3;
    
    goto label;
    while(n > 0){
        n--;
        printf("%d\n",n);   
    }
    label:
    printf("after while loop\n");
    return 0; 
}

/*Output : 
after while loop
*/

//Program 2:
#include<stdio.h>
int main(){
    int n=3;
    label:
    printf("%d\n",n);
    
    while(n > 0){
        n--;
        goto label;
    }
    return 0; 
}

/*Output : 
3
2
1
0
*/
