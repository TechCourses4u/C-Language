/* Sample program to understand switch
Imp points:
1. Can put cases in any order
2. Can use char value in case and switch
3. Can combine cases
4. Every statement must belong to some case
5. default block is optional
6. continue is not available in switch
7. case continue to execute until break is encountered.
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

