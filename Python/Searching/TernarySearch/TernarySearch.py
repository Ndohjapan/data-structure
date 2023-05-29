def ternary_search(arr: list[int], start: int, end: int, target: int):
    if(start <= end):
        mid1 = start + (end - start)//3
        mid2 = end - (end - start)//3
        
        
        if(arr[mid1] == target):
            return mid1 
        
        if(arr[mid2] == target):
            return mid2
        
        if(target < arr[mid1]):
            ternary_search(arr, start, mid1-1, target) 
        
        elif(target > arr[mid2]):
            return ternary_search(arr, mid2+1, end, target)
        
        else:
            return ternary_search(arr, mid1+1, mid2-1, target)

    return -1

if __name__ == '__main__':
    arr = [2, 4, 4, 5, 6, 7, 8, 9, 11]
    target = 9
    start = 0
    end = len(arr) - 1
    
    result = ternary_search(arr, start, end, target) 
    print(result)