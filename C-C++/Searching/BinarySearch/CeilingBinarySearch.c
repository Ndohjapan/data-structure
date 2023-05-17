#include <stdio.h>
#include <math.h>

int search(int arr[], int target, int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int mid = ceil((left+right)/2);

        if(arr[mid] == target){
            return mid;
        } 

        else if(arr[mid] > target){
            right = mid - 1;
        }

        else{
            left = mid + 1;
        }
    }

    return left;
}

int main(){
    int arr[] = {-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32};
    int target = 20;
    int size = sizeof(arr)/sizeof(int);

    int result = search(arr, target, size);

    printf("%d", arr[result]);

    return 0;
}