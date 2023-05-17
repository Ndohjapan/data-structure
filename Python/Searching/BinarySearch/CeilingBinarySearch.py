# Find the number that is directly greater than the target number if not found.

from math import floor

def search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while(left <= right):
        mid = floor((left + right)/2)
        if(arr[mid] == target):
            return mid
        
        elif(arr[mid] < target):
            left = mid + 1
        else:
            right = mid -1
        
    return left


if __name__ == '__main__':
    arr = [-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32]
    # arr = ['b', 'd', 'f', 's', 't' ,'u', 'v']
    target = 33
    # target = 'p'
    print(arr[search(arr, target)])
    
    