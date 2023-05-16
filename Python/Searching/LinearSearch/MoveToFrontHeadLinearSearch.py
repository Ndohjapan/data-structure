# Python3 program for transposition to
# improve the Linear Search Algorithm


# Structure of the array
class Array :
	def __init__(self,a=[0]*10,size=10,l=0) -> None:
		self.A=a
		self.size=size
		self.length=l

# Function to print array element
def Display(arr):

	# Traverse the array arr[]
	for i in range(arr.length) :
		print(arr.A[i],end=" ")
	
	print()


# Function that performs the move to
# front operation for Linear Search
def LinearSearchMoveToFront(arr, key:int):

	# Traverse the array
	for i in range(arr.length) :

		# If key is found, then swap
		# the element with 0-th index
		if (key == arr.A[i]) :
			arr.A[i], arr.A[0]=arr.A[0],arr.A[i]
			return i
		
	
	return -1


# Driver Code
if __name__ == '__main__':
	# Given array arr[]
	arr=Array([2, 23, 14, 5, 6, 9, 8, 12], 10, 8)

	print("Elements before Linear Search Transposition: ",end='')

	# Function Call for displaying
	# the array arr[]
	Display(arr)

	# Function Call for transposition
	LinearSearchMoveToFront(arr, 14)

	print("Elements after Linear Search Transposition: ",end='')

	# Function Call for displaying
	# the array arr[]
	Display(arr)
