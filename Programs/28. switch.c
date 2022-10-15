/* Sample program to understand switch
Imp points:
1. Can put cases in any order
2. Can use char value in case and switch
3. Can combine cases
4. Every statement must belong to some case
5. default block is optional
6. continue is not available in switch
7. case continue to execute until break is encountered.

switch vs if else:
- switch case can not use statements like case x less than 10
- Similarly, expressions like 2+3 is allowed but a+b is not allowed
- float is also not allowed in switch case
- Switch is either more or  as efficient as if else
- Compiler generates a jump table for switch during compilation
- If else are slower because conditions are evaluated at run time.
- For multiway branching i.e. more cases with constant values, switch is better
- For variable boolean results, if else is better.
- In real projects, switch is always preferred over if else when possible.
*/

#include<stdio.h>
int main(){
    int i = 1;
    switch(i){
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        default:
            printf("other"); 
            break;
    }
    return 0;
}

