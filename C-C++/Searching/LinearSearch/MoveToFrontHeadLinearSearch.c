// C program to implement the move to
// front to optimized Linear Search
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

// Function that performs the move to
// front operation for Linear Search
int LinearSearchMoveToFront(
	struct Array* arr, int key)
{
	int i;

	// Traverse the array
	for (i = 0; i < arr->length; i++) {

		// If key is found, then swap
		// the element with 0-th index
		if (key == arr->A[i]) {
			swap(&arr->A[i], &arr->A[0]);
			return i;
		}
	}
	return -1;
}

// Driver code
int main()
{
	// Given array arr[]
	struct Array arr
		= { { 2, 23, 14, 5, 6, 9, 8, 12 },
			10,
			8 };

	printf("Elements before Linear"
		" Search Move To Front: ");

	// Function Call for displaying
	// the array arr[]
	Display(arr);

	// Function Call for Move to
	// front operation
	LinearSearchMoveToFront(&arr, 14);

	printf("Elements after Linear"
		" Search Move To Front: ");

	// Function Call for displaying
	// the array arr[]
	Display(arr);
	return 0;
}
