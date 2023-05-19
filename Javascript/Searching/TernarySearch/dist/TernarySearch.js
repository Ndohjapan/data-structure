"use strict";
function ternarySearch(arr, start, end, target) {
    if (start <= end) {
        let mid1 = start + Math.floor((end - start) / 3);
        let mid2 = end - Math.floor((end - start) / 3);
        if (arr[mid1] == target) {
            return mid1;
        }
        if (arr[mid2] == target) {
            return mid2;
        }
        if (target < arr[mid1]) {
            return ternarySearch(arr, start, mid1 - 1, target);
        }
        else if (target > arr[mid2]) {
            return ternarySearch(arr, mid2 + 1, end, target);
        }
        else {
            return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
        }
    }
    return -1;
}
let arr = [2, 4, 4, 5, 6, 7, 8, 9, 11];
let target = 9;
let start = 0;
let end = arr.length - 1;
let result = ternarySearch(arr, start, end, target);
console.log(result);
