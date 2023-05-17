function search(arr: number[], target: number): number {
    
    let left = 0
    let right = arr.length - 1

    while(left <= right){
        let mid = Math.floor((left+right)/2);

        if(arr[mid] == target){
            return mid
        }

        else if(arr[mid] > target){
            right = mid - 1
        }

        else{
            left = mid + 1 
        }

    }
    
    return -1
}

let arr: number[] = [-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32]
let target: number = 17

let result = search(arr, target);

console.log(result)

export {}