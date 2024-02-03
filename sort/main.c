#include <stdio.h>
#include <stdlib.h>

void sort(int* list, int len){

    int i, temp, x;
    for (i=0; i<len; i++){
        for (x=0; x<len; x++){
            if(i>0 && x>0){
                if(list[i]<list[x-1]){
                    temp = list[i];
                    list[i] = list[x-1];
                    list[x-1] = temp;
                }
        }
        }

    }
    printf("Ordered:\n");
    for (i=0;i<len;i++){
        printf("%d ", list[i]);
    }

};

int main(){
    int list[] = {1,6,8,5,4,2,3,9,7,10,18,15,19,17,13,12,11,14,16,20};

    int len = sizeof(list) / sizeof(list[0]);
    printf("Original:\n");
    for (int i=0;i<len;i++){
        printf("%d ", list[i]);
    } 
    printf("\n \n");
    sort(list, len);
    return 0;
}
