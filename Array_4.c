/*WAP containing a function which revers the value passed to it.*/
#include<stdio.h>
/*Funtion decleration*/
void Reverse(int *arr, int n);
/*Funtion call*/
/*Main program begins*/
int main(){
    /*decleration statement*/
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr[5]);
    printf("%d\n",arr[6]);
    Reverse(arr, n);
    printf("Printing in reverse.\n");
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr[5]);
    printf("%d\n",arr[6]);
    return 0;
}
/*Function Definition*/
void Reverse(int *arr, int n){
    for(int i = 0; i < (n/2); i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}