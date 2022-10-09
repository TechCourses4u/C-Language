/* Sample program to print below pattern using continue statement inside for loops
1 
1 2 
1 2 
1 2 4 
1 2 4 5
*/
#include<stdio.h>
int main(){
    for(int row = 1; row<=5; row++){
	    for(int col=1;col<=row;col++){
            if(col==3){
                continue;
            }
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0; 
}
