#include <iostream>
#include <string>
#include <iterator>

using namespace std;


int linearSearch(int num, const int array[], int size){

    for(int i = 0; i < size; i++){
        if(num == array[i]){
            cout << "The number is in " << i + 1 << "º position \n";
            return i;
        }
    }
    cout << "Your number is not in the array\n";
    return -1;
}


int main(){
    const int size = 30;
    int arr[] = {5, 20, 12, 8, 6, 28, 23, 15, 29, 4, 9, 7, 16, 10, 30, 27, 11, 25, 17, 19, 1, 14, 2, 22, 3, 24, 18, 21, 26, 13};
    
    int number;
    cout << "Insert one number beetwen 1 and 50: ";
    cin >> number;

    linearSearch(number, arr, size);

    return 0;
}