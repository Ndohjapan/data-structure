/**
 * @param {number[]} arr
 * @param {number} n
 * @param {number} k
 * @return {integer}
 */
class Solution {
  search(arr, n, k) {
    for (let i = 0; i < n; i++) {
      if (arr[i] == k) {
        return i + 1;
      }
    }

    return -1;
  }
}

const sol = new Solution();

let arr = [12, 3, 4, 5, 67, 12];

let n = arr.length;

let k = 67;

console.log(sol.search(arr, n, k));
