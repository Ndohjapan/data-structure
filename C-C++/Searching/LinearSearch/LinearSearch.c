#include <stdio.h>

int search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return (i + 1);
        }
    }

    return -1;
}

int main()
{
    int arr[] = {12, 3, 4, 5, 67, 12};

    int n =  sizeof(arr)/sizeof(int);

    int k = 67;

    printf("%d", search(arr, n, k));
}