from math import floor

def search(arr: list, target: int) -> int:
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
    
    return -1


if __name__ == '__main__':
    arr = [5,7,7,8,8,10]
    target = 8
    print(search(arr, target))
    
    