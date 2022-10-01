/* Sample program to check whether the character entered through keyboard is a capital letter, small letter, digit or a special symbol
ASCII values range for various characters
digit - 48-57
Capital A-Z - 65-90
Small a-z - 97 - 122
Special symbol - 0-47,58-64,91-96,123-127
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    if(c>=48 && c<=57){
        printf("char: %c => ASCII: %d is a Digit \n",c,c);
    } else if(c>=65 && c<=90){
        printf("char: %c => ASCII: %d is a Capital\n",c,c);
    } else if(c>=97 && c<=122){
        printf("char: %c => ASCII: %d is a small case\n",c,c);
    } else {
        printf("char: %c => ASCII: %d is a Special Symbol\n",c,c);
    }
    return 0;
}
