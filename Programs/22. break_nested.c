/* Sample program to print below pattern using break keyword in nested for loops
1 
1 2 
1 2 3 
1 2 3 
1 2 3
*/
#include<stdio.h>
int main(){
    for(int row = 1; row<=5; row++){
	    for(int col=1;col<=row;col++){
            if(col==4){
                break;
            }
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0; 
}
