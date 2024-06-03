#include <stdio.h>

#define SIZE 20

int indexLinearSearch(int* arr, int n){
    for(int i=0; i < SIZE; i++){
        if(arr[i] == n){
            return i;
        }
        else if(arr[i] > n){
            return -1;
        }
    }
}

int main(){
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,18,19,20,22,25};
    int n = 9;
    printf("%d \n", indexLinearSearch(arr, n));
}