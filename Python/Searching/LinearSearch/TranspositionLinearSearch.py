# Python3 program for transposition to
# improve the Linear Search Algorithm


# Structure of the array
class Array:
    def __init__(self, a=[0] * 10, size=10, l=0) -> None:
        self.A = a
        self.size = size
        self.length = l


# Function to print array element
def Display(arr):
    # Traverse the array arr[]
    for i in range(arr.length):
        print(arr.A[i], end=" ")

    print()


# Function that performs the Linear
# Search Transposition
def LinearSearchTransposition(arr, key):
    # Traverse the array
    for i in range(arr.length):
        # If key is found, then swap
        # the element with it's
        # previous index
        if key == arr.A[i]:
            # If key is first element
            if i == 0:
                return i

            arr.A[i], arr.A[i - 1] = arr.A[i - 1], arr.A[i]

            return i

    return -1


# Driver Code
if __name__ == "__main__":
    # Given array arr[]
    arr = Array([2, 23, 14, 5, 6, 9, 8, 12], 10, 8)

    print("Elements before Linear Search Transposition: ")

    # Function Call for displaying
    # the array arr[]
    Display(arr)

    # Function Call for transposition
    LinearSearchTransposition(arr, 14)

    print("Elements after Linear Search Transposition: ")

    # Function Call for displaying
    # the array arr[]
    Display(arr)
