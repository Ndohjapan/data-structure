// C Program to pass an array to a function
#include <stdio.h>

void printArray(int arr[])
{
    // The array is decayed into a pointer as the first element and size of interger element is usually 4 bytes
    printf("Size of Array in Functions: %d\n", sizeof(arr));
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

// function
int *func()
{
    static int arr[5] = {1, 2, 3, 4, 5};

    return arr;
}

// driver code
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    // Sizeof prints only the size of the array in bytes
    printf("Size of Array in main(): %d\n", sizeof(arr));
    printArray(arr);

    int *ptr = func();

    printf("\nArray Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr++);
    }
}
