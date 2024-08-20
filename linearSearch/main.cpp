#include <iostream>
#include <string>
#include <iterator>

int linearSearch(int num, const int array[], int size){

    for(int i = 0; i < size; i++){
        if(num == array[i]){
            return i;
        }
    }
    return -1;
}


int main(){
    const int size = 30;
    int arr[] = {5, 20, 12, 8, 6, 28, 23, 15, 29, 4, 9, 7, 16, 10, 30, 27, 11, 25, 17, 19, 1, 14, 2, 22, 3, 24, 18, 21, 26, 13};
    
    int number = 15;
    int arr[] = {5, 20, 12, 8, 6, 28, 23, 15, 29, 4, 9, 7, 16, 10, 30, 27, 11, 25, 17, 19, 1, 14, 2, 22, 3, 24, 18, 21, 26, 13};    
    int number = 8;

    linearSearch(number, arr, size);

    return 0;
}
