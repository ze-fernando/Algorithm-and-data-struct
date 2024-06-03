#include <stdio.h>

int primeNum(int n){
    if(n > 1){
        for(int i=2; i <= n/2; i++){
            if(n % i == 0){
                printf("No Prime! \n");
                return 0;
            }
        }
        printf("Prime! \n");
        return 1;
    }
}

int main(){
    int num = 14;
    primeNum(num);
}