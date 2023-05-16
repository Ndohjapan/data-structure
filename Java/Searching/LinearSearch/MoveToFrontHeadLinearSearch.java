package Java.Searching.LinearSearch;

// Java program to implement
// the move to front to optimized
// Linear Search
class MoveToFrontHeadLinearSearch
{

    // Structure of the array
    static class Array
    {
    int []A = new int[10];
    int size;
    int length;
    Array(int []A, int size,
            int length)
    {
        this.A = A;
        this.size = size;
        this.length = length;
    }
    };
    
    // Function to print the
    // array element
    static void Display(Array arr)
    {
    int i;
    
    // Traverse the array arr[]
    for (i = 0;
        i < arr.length; i++)
    {
        System.out.printf("%d ", arr.A[i]);
    }
    System.out.printf("\n");
    }
    
    // Function that performs the
    // move to front operation for
    // Linear Search
    static int LinearSearchMoveToFront(Array arr,
                                    int key)
    {
    int i;
    
    // Traverse the array
    for (i = 0; i < arr.length; i++)
    {
        // If key is found, then swap
        // the element with 0-th index
        if (key == arr.A[i])
        {
        int temp = arr.A[i];
        arr.A[i] = arr.A[0];
        arr.A[0] = temp;
        return i;
        }
    }
    return -1;
    }
    
    // Driver code
    public static void main(String[] args)
    {
    // Given array arr[]
    int a[] = {2, 23, 14, 5,
                6, 9, 8, 12 };
    Array arr = new Array(a, 10, 8);
    
    System.out.printf("Elements before Linear" +
                        " Search Move To Front: ");
    
    // Function Call for
    // displaying the array
    // arr[]
    Display(arr);
    
    // Function Call for Move
    // to front operation
    LinearSearchMoveToFront(arr, 14);
    
    System.out.printf("Elements after Linear" +
                        " Search Move To Front: ");
    
    // Function Call for displaying
    // the array arr[]
    Display(arr);
    }
    }
    
    // This code is contributed by gauravrajput1
    