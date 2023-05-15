import array

arr = array.array("i", [1, 2, 3])

print("The new created array is: ", end="")
for i in range (0, 3):
    print(arr[i], end=" ")
    
print("\r")

arr.append(4)

# printing appended array
print("The appended array is : ", end="")
for i in range (0, 4):
    print (arr[i], end=" ")
     
     
# using insert() to insert value at specific position
# inserts 5 at 2nd position
arr.insert(2, 5)
 
print("\r")

# printing array after insertion
print ("The array after insertion is : ", end="")
for i in range (0, 5):
    print (arr[i], end=" ")