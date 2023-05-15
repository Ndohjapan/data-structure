#include <stdio.h>

int func(int arr[], int size){

    int max = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){
    int arr[] = {10, 22, 12, 3, 24, 52, 16};

    int size = sizeof(arr)/sizeof(int);

    printf("Max Element is: %d", func(arr, size));

    return 0;
}