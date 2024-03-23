#include <iostream>

int binarySearch(int n, int* arr, int size){
  int max = size;
  int min = 0;
  int middle = (min + max) / 2;

  while(arr[min] <= arr[max]){
    if(n > arr[middle]){
      min = middle;
      middle = (min + max) / 2;
    }
    else if(n < arr[middle]){
      max = middle;
      middle = (min + max) / 2;
    }
    else{
      return middle;
    }
  }

  return -1;
}



int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int n = 7;
  int size = sizeof(arr) / sizeof(arr[0]); 

  int r = binarySearch(n, arr, size);
  
  std::cout << r;
}
