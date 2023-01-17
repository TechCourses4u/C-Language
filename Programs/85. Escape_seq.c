/* Sample program to understand escape sequences in C */
#include<stdio.h>
int main(){
    printf("tech\b courses\n");
    printf("tech\tcourses\n");
    printf("tech\rcourses\n");
    printf("\' \" \\\n");
    return 0;
} 

/*Output :
tec courses
tech    courses
courses
' " \
*/
