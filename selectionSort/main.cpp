#include <iostream>


void selectionSort(int size, int arr[]){
    for(int i=0; i<size-1; i++){
        int index = i;
        for(int j=i+1; j<size; j++){
            if (arr[j] < arr[index]){
                index = j;
            }
        }
        int aux = arr[index];
        arr[index] = arr[i];
        arr[i] = aux;
    }
    for(int x=0; x<size; x++){
        std::cout << arr[x] << ' ';
    }
    std::cout << '\n';   
}

int main(){
    int array[] = {3, 9, 5, 1, 0, 8, 4, 7, 6, 10, 2};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(size, array);
}