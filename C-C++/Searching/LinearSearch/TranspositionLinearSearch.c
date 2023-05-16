// C program for transposition to
// improve the Linear Search Algorithm
#include <stdio.h>

// Structure of the array
struct Array {

	int A[10];
	int size;
	int length;
};

// Function to print the array element
void Display(struct Array arr)
{
	int i;

	// Traverse the array arr[]
	for (i = 0; i < arr.length; i++) {
		printf("%d ", arr.A[i]);
	}
	printf("\n");
}

// Function that swaps two elements
// at different addresses
void swap(int* x, int* y)
{
	// Store the value store at
	// x in a variable temp
	int temp = *x;

	// Swapping of value
	*x = *y;
	*y = temp;
}

// Function that performs the Linear
// Search Transposition
int LinearSearchTransposition(
	struct Array* arr, int key)
{
	int i;

	// Traverse the array
	for (i = 0; i < arr->length; i++) {

		// If key is found, then swap
		// the element with it's
		// previous index
		if (key == arr->A[i]) {

			// If key is first element
			if (i == 0)
				return i;

			swap(&arr->A[i],
				&arr->A[i - 1]);

			return i;
		}
	}
	return -1;
}

// Driver Code
int main()
{
	// Given array arr[]
	struct Array arr
		= { { 2, 23, 14, 5, 6, 9, 8, 12 },
			10,
			8 };

	printf("Elements before Linear"
		" Search Transposition: ");

	// Function Call for displaying
	// the array arr[]
	Display(arr);

	// Function Call for transposition
	LinearSearchTransposition(&arr, 14);

	printf("Elements after Linear"
		" Search Transposition: ");

	// Function Call for displaying
	// the array arr[]
	Display(arr);
	return 0;
}
