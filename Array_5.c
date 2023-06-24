/*WAP Containing funtions which counts the number of positive integer in an array.*/
#include<stdio.h>
/*Function decleration*/
void CountPositiveInteger(int n, int *arr, int *x);
/*Funtion calling*/
/*main Program brgins*/
int main(){
    /*Decleration statemnt*/
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int x = 0;
    CountPositiveInteger(n, arr, &x);
    printf("The number of positive integer in the array is : %d",x);
    return 0;
}
/*Funtion definition*/
void CountPositiveInteger(int n, int *arr, int *x){
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            *x = *x + 1;
        }
    }
}