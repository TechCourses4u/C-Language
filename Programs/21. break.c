/* Sample program to understand break statement in C*/
#include<stdio.h>
int main(){
    int i = 1;
    while(i<= 10){
	    if(i==5)
		    break;
	    printf("%d\n",i);
	    i = i +1;
    }
    return 0; 
}

/* Output :
1
2
3
4
*/
