#include <stdio.h>

// Define a function to perform the linear search
int linearSearch(int arr[], int size, int key)
{
	// If the size of the array is zero, return -1
	if (size == 0) {
		return -1;
	}

	// Check if the element at the current index
	// is equal to the key
	if (arr[size - 1] == key) {
		// If equal, return the index
		return size - 1;
	}
	else {
		// If not equal, call the function again
		// with the size reduced by 1
		return linearSearch(arr, size - 1, key);
	}
}

// Driver code
int main()
{
	int arr[] = { 5, 15, 6, 9, 4 };
	int key = 4;
	int index
		= linearSearch(arr, sizeof(arr) / sizeof(int), key);
	if (index == -1) {
		printf("Key not found in the array.\n");
	}
	else {
		printf("The element %d is found at %d index of the "
			"given array \n",
			key, index);
	}
	return 0;
}
