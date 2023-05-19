"use strict";
function interpolationSearch(arr, target) {
    let start = 0;
    let end = arr.length - 1;
    while (start <= end && arr[start] <= target && arr[end] >= target) {
        let probe = Math.floor(start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
        if (arr[probe] == target) {
            return probe;
        }
        if (arr[probe] > target) {
            end = probe - 1;
        }
        else {
            start = probe + 1;
        }
    }
    return -1;
}
function interpolationSearchRecursion(arr, start, end, target) {
    if (arr[start] > target || arr[end] < target) {
        return -1;
    }
    let probe = Math.floor(start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
    if (arr[probe] == target) {
        return probe;
    }
    if (arr[probe] > target) {
        return interpolationSearchRecursion(arr, start, probe - 1, target);
    }
    else {
        return interpolationSearchRecursion(arr, probe + 1, end, target);
    }
}
let arr = [2, 3, 4, 4, 5, 6, 8, 9];
let target = 4;
let result = interpolationSearchRecursion(arr, 0, arr.length - 1, target);
console.log(result);
