/* Sample Guess Game Program using do-while loop
Guess Game Program Descriptoin:
You assign a winning number in between 1 to 1000. You ask user to enter a number from 1 to 1000. 
If number matches, you display game won and terminate game.
Otherwise you ask user, if they want to play again. 
	-If user enter y , you again ask user to enter number.
	-If user enter any other character, you terminate the game.
*/

#include<stdio.h>
int main(){
    char play_again='n';
    int winning_number = 49;
    int user_number=1;
    do {
        printf("Enter a number between 0 to 100: ");
        scanf("%d",&user_number);
        if(user_number==winning_number){
            printf("you won the game\n");
            return 0;
        }
        printf("No match. Want to play again : ");
        fflush(stdin);
        scanf("%c",&play_again);
    } while(play_again=='y');
    return 0; 
}

 




