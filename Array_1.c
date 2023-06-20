/*WAP to accept marks of five student in an array and print them to the screen.*/
#include<stdio.h>
/*Main program begins*/
int main(){
    /*Decleration Statement*/
    int marks[5];
    for(int i = 0; i < 5; i++){
        printf("Enter marks for student %d : ",i+1);
        scanf("%d",marks[i]);
    }
    for(int i =0; i < 5; i++){
        printf("Marks for student %d is : %d\n",i+1, marks[i]);
    }
    return 0;
}