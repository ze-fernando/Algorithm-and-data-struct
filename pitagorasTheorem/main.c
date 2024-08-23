#include <stdio.h>
#include <math.h>

double pitagoras(double a, double b){
    
    double c = pow(a, 2) + pow(b ,2);
    
    return sqrt(c);
}


int main(){

    int a = 3;
    int b = 4;

    printf("O resultado da hipotenusa é: %.2f\n", pitagoras(a, b));

    return 0;
}