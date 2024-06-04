#include <stdio.h>

void fibo(int n){
    int a = 0, b = 1, c = 0, i =0;
    printf("1 ");
    while(i < n){
        c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    }
    printf("\n");
}

int main(){
    int num = 25;
    fibo(num);
    return 0;
}