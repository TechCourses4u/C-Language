/* Sample Program to understand sscanf and sprintf functions in C */
#include<stdio.h>
int main(){
   //Example 1
   char input[] = "Tech Courses 20";
   char str1[10], str2[10],str3[10];
   char val[10];

   sscanf(input,"%s %s %s",str1,str2,str3);
   printf("%s %s %s\n",str1,str2,str3);

   char output[20];
   sprintf(output,"%s %s %s",str1,str2,str3);
   printf("%s\n",output);

   //Example 2
   char result[50];
   int a = 10;
   int b = 20;
   int sum = a + b;
   sprintf(result,"sum of a : %d and b : %d is %d\n",a,b,sum);
   //printf("%s\n",result);
   return 0;
}

