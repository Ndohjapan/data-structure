#include <iostream>
using namespace std;

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

int search_recursion(int arr[], int start, int end, int target)
{
    if (arr[start] > target || arr[end] < target)
    {
        return -1;
    }
    int probe = (start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
    if (arr[probe] == target)
    {
        return probe;
    }
    if (arr[probe] > target)
    {
        return search_recursion(arr, start, probe - 1, target);
    }
    else
    {
        return search_recursion(arr, probe + 1, end, target);
    }
}

int main()
{
    int arr[] = {-2, 3, 4, 7, 8, 9, 11, 13, 16, 17, 22, 26, 32};
    int target = 17;
    int size = sizeof(arr) / sizeof(int);

    // int result = search(arr, size, target);
    int result = search_recursion(arr, 0, size - 1, target);

    cout << result << endl;

    return 0;
}