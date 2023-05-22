def exponential_search(arr: list, target: int) -> int:
    key = 1
    start = 0
    end = len(arr) - 1
    
    while start <= end and key > 0:
        if(arr[key]) == target:
            return key;
        
        elif(arr[key] < target):
            start = key + 1
            key = key * 2 if key * 2 < end else end
        
        else:
            end = key - 1
            key = 0

    return binary_search(arr, start, end, target)

def binary_search(arr: list, start: int, end: int, target: int) -> int:
    while start <= end:
        mid = (start + end)//2
        if(arr[mid] == target):
            return mid
        
        if(arr[mid] > target):
            end = mid - 1
        
        else:
            start = mid + 1
    
    return -1

if __name__ == '__main__':
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    target = 1
    result = exponential_search(arr, target)
    print(result)