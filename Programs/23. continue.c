/* Sample program to understand continue statement in C*/
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
	    if(i==5)
		    continue;
	    printf("%d\n",i);
    }
    return 0; 
}

/* Output :
1
2
3
4
6
7
8
9
10
*/
