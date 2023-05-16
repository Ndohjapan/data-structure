// JavaScript implementation of Move to Front optimization for Linear Search

// Structure of the array
class Array {
  constructor(A, size, length) {
    this.A = A;
    this.size = size;
    this.length = length;
  }
}

// Function to print the array element
const display = (arr) => {
  // Traverse the array arr[]
  for (let i = 0; i < arr.length; i++) {
    console.log(arr.A[i]);
  }
  console.log("\n");
};

// Function that performs the move to front operation for Linear Search
const linearSearchMoveToFront = (arr, key) => {
  // Traverse the array
  for (let i = 0; i < arr.length; i++) {
    // If key is found, then swap the element with 0-th index
    if (key === arr.A[i]) {
      let temp = arr.A[i];
      arr.A[i] = arr.A[0];
      arr.A[0] = temp;
      return i;
    }
  }
  return -1;
};

// Given array arr[]
const a = [2, 23, 14, 5, 6, 9, 8, 12];
const arr = new Array(a, 10, 8);

console.log("Elements before Linear Search Move To Front: ");

// Function Call for displaying the array arr[]
display(arr);

// Function Call for Move to front operation
linearSearchMoveToFront(arr, 14);

console.log("Elements after Linear Search Move To Front: ");

// Function Call for displaying the array arr[]
display(arr);
