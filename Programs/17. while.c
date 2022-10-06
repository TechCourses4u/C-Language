/* Important point for while loop
1. Similar to if statement you can use relational and logical operators in while loop
2. {} optinal if only one line in body
3. Always write a condition that will eventually become false, otherwise infinite loop 
4. We can decrement counter as well
5. It is not necessary to change counter by 1. You can change by any value
6. There is no semicolon after while statement
7. If you mistakenly write ; after while statement it will become infinite loop
*/
#include<stdio.h>
int main(){
    int i = 1;
    while(i <= 100) {
	    printf("%d\n",i);
	    i = i +1;
    }
    return 0; 
}
