/* for loop important points :
1.Similar to if statement you can use relational and logical operators in while loop.
2.{} optinal if only one line in body.
3. Always write a condition that will eventually become false, otherwise infinite loop .
4. We can decrement counter as well.
5. It is not necessary to change counter by 1. You can change by any value.
6. There is no semicolon after while statement.
7. If you mistakenly write ; after while statement it will become infinite loop.
8. The initialization can contain more than one statement separated by comma operator.
9. Similarly increment can contain more than one statement separated by comma operator.
10. Similarly condition can contain more than one condition using logical operators.
*/
#include<stdio.h>
int main(){
    for(int i = 1; i<=100; i=i+1){
	    printf("%d\n",i);
    }
    return 0; 
}
