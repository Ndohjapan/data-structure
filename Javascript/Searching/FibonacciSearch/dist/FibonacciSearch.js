"use strict";
function fibonacciSearch(arr, target) {
    let n = arr.length;
    let fib2 = 0;
    let fib1 = 1;
    let fib = fib1 + fib2;
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }
    let offset = -1;
    while (fib > 1) {
        let i = Math.min(offset + fib2, n - 1);
        if (arr[i] < target) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
        else if (arr[i] > target) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
        else {
            return i;
        }
    }
    return -1;
}
let arr = [1, 3, 5, 7, 10, 12, 15, 18, 21, 23, 26, 28, 31, 34, 37, 40, 43];
let target = 43;
console.log(fibonacciSearch(arr, target));
