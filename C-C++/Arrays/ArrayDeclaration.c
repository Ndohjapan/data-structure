#include <stdio.h>

int main(){
    // declaring array of characters
    int arr_int[5];


    for(int i =0; i<5; i++){
        arr_int[i] = i+1;
    }

    printf("Element at arr_int[2]: %d", arr_int[2]);

    return 0;

}