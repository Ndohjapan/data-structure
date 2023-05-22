#include <stdio.h>

// Define a macro to get the minimum of two numbers
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Declare the search function before using it
int search(int arr[], int n, int target);

int main()
{
    // Initialize the array and the target value
    int arr[] = { 1, 3, 5, 7, 10, 12, 15, 18, 21, 23, 26, 28, 31, 34, 37, 40, 43 };
    int target = 43;

    // Get the length of the array by dividing its size by the size of an element
    int n = sizeof(arr) / sizeof(int);

    // Call the search function and store the result
    int result = search(arr, n, target);

    // Print the result using printf and a placeholder for the integer value
    printf("%d\n", result);

    return 0;
}

// Define the search function that implements the Fibonacci search algorithm
int search(int arr[], int n, int target)
{
    // Initialize three Fibonacci numbers
    int fib2 = 0; // (m-2)'th Fibonacci number
    int fib1 = 1; // (m-1)'th Fibonacci number
    int fib = fib1 + fib2; // m'th Fibonacci number

    // Find the smallest Fibonacci number that is greater than or equal to n
    while (fib < n)
    {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }

    // Initialize the offset to -1
    int offset = -1;

    // Loop until the Fibonacci number becomes 1
    while (fib > 1)
    {
        // Get the index by adding the offset and the (m-2)'th Fibonacci number
        // Use the MIN macro to avoid going out of bounds
        int i = MIN(offset + fib2, n - 1);

        // If the target is greater than the element at index i,
        // move one Fibonacci segment down and update the Fibonacci numbers
        if (arr[i] < target)
        {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        // If the target is smaller than the element at index i,
        // move two Fibonacci segments down and update the Fibonacci numbers
        else if (arr[i] > target)
        {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        // If the target is equal to the element at index i,
        // return the index as the result
        else
        {
            return i;
        }
    }

    // If the target is equal to the last element in the array,
    // return the last index as the result
    if (fib == 1 && arr[offset + 1] == target)
    {
        return offset + 1;
    }

    // If none of the above conditions are met,
    // return -1 to indicate that the target is not found in the array
    return -1;
}