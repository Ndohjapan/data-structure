#include <stdio.h>
// Program the initiates and declares an array based on users preference

int main() {

    // size of array
    int n;
    
    printf("Please enter size of array you want: ");

    // Take input from the keyboard and saves to the address of variable n
    scanf("%d", &n);

    // Array initiation
    int arr[n];

    //Loop to feed input for array
    for (int i = 0; i < n; i++) {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    // Loop to print out content of array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}