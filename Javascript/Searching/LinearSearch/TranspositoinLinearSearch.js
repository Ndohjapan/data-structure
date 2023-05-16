// Javascript program for transposition
// to improve the Linear Search
// Algorithm

// Structure of the
// array
class Array {
  constructor(A, size, length) {
    this.A = A;
    this.size = size;
    this.length = length;
  }
}

// Function to print the
// array element
function Display(arr) {
  let i;

  // Traverse the array arr[]
  for (i = 0; i < arr.length; i++) {
    console.log(arr.A[i] + " ");
  }
  console.log("<br>");
}

// Function that performs the Linear
// Search Transposition
function LinearSearchTransposition(arr, key) {
  let i;

  // Traverse the array
  for (i = 0; i < arr.length; i++) {
    // If key is found, then swap
    // the element with it's
    // previous index
    if (key == arr.A[i]) {
      // If key is first element
      if (i == 0) return i;
      let temp = arr.A[i];
      arr.A[i] = arr.A[i - 1];
      arr.A[i - 1] = temp;
      return i;
    }
  }
  return -1;
}

// Driver Code

// Given array arr[]
let tempArr = [2, 23, 14, 5, 6, 9, 8, 12];
let arr = new Array(tempArr, 10, 8);

console.log("Elements before Linear" + " Search Transposition: ");

// Function Call for displaying
// the array arr[]
Display(arr);

// Function Call for transposition
LinearSearchTransposition(arr, 14);

console.log("Elements after Linear" + " Search Transposition: ");

// Function Call for displaying
// the array arr[]
Display(arr);

// This code is contributed by Saurabh Jaiswal
