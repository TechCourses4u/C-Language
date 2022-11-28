/* Sample program to convert given string to Initials 
Eg: tech courses --> T.C
	  Mahendra singh dhoni --> M.S.D

	 if string is NULL, do not print anything
*/

#include<stdio.h>
int main(){
    char name[50]; 
    printf("Enter name: ");
    scanf("%[^\n]",name);
    //if string is null
    if(name[0]=='\0')
        return 0;
    //count blank spaces
    int count=0;
    int i=0;
    while(name[i]!='\0'){
        if(name[i]==' ')
            count++;
        i++;
    }
    //print initial and . for no of blanks
    i=0;
    while(count!=0){
        if(name[i]>96)
            printf("%c.",name[i]-32);
        else
            printf("%c.",name[i]);
        while(name[i]!=' ')
            i++;
        i++;
        count--;
    }
    //print only initial for last name
    if(name[i]>96)
        printf("%c",name[i]-32);
    else
        printf("%c",name[i]);
    
    return 0;
}


