/* Sample program to understand gets and puts functions in C */
#include<stdio.h>
int main(){
   char str[10];
   printf("Gets : Enter string\n");
   gets(str);
   puts("your name is :");
   puts(str);

   printf("Fgets : Enter string\n");
   fgets(str,10,stdin);
   puts("your name is :");
   puts(str);
 
   return 0;
}

/*
Output: 
Gets : Enter string
tech courses
your name is :
tech courses
Fgets : Enter string
tech courses
your name is :
tech cour
*/
