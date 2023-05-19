#include <stdio.h>

int search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    while (start <= end && arr[start] <= target && arr[end] >= target)
    {
        int probe = (start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
        if (arr[probe] == target)
        {
            return probe;
        }
        if (arr[probe] > target)
        {
            end = probe - 1;
        }
        else
        {
            start = probe + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32};
    int target = 17;
    int size = sizeof(arr)/sizeof(int);

    int result = search(arr, size, target);

    printf("%d", result);

    return 0;
}