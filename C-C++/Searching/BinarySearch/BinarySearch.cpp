#include <iostream>
#include <math.h>
using namespace std;

int search(int arr[], int target, int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = ceil((start+end)/2);

        if(arr[mid] == target){
            return mid;
        } 

        else if(arr[mid] > target){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32};
    int target = 17;
    int size = sizeof(arr)/sizeof(int);

    int result = search(arr, target, size);

    cout << result << endl;

    return 0;
}