/*Guess the number*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*Main program begins*/
int main(){
    /*Decleretion statement*/
    int Number, Guess, Total_Guesses = 1;
    srand(time(0));
    Number = rand()%100 +1;
    /*Computation using do while loop and if else statement*/
    do{
        printf("Guess the number between 1 and 100.\n");
        scanf("%d",&Guess);
        if(Guess > Number){
            printf("Lower number please.\n");
        }
        else if(Guess < Number){
            printf("Higher number please.\n");
        }
        else{
            printf("Congratulations you guessed the right number.\n");
                printf("Your number of guesses were %d.\n",Total_Guesses);
        }
        Total_Guesses++;
    }while(Guess != Number);
    return 0;
}