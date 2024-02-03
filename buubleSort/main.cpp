#include <iostream>
#include <iterator>

using namespace std;


void sort(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(i > 0 && j > 0){   
        if(arr[i]<arr[j-1]){
          swap(arr[i], arr[j-1]);
        }
      }
    }
  }

  cout << "\nOrdered\n";
  for(int i = 0; i < size; i++) {
    cout<< arr[i] << ' ' ;
  }

}


int main(){
  int arr[] = {9,6,16,10,3,8,5,2,7,4,1,0,19,15,18,11,13,12,17,20,14};
  const int size = 21; 

  cout << "\nOriginal\n";
  for(int i = 0; i < size; i++) {
    cout<< arr[i] << ' ' ;
  }

  sort(arr, size);
  return 0;
}
