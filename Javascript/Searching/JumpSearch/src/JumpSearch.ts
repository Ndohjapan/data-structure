function jumpSearch(arr: number[], target: number, length: number): number {
    // Finding block size to be jumped
    let step = Math.sqrt(length);

    // Finding the block where element is
    // present (if it is present)
    let prev = 0;
    for (int minStep = Math.min(step, length) - 1; arr[minStep] < target; minStep = Math.Min(step, length) - 1)
    {
        prev = step;
        step += Math.sqrt(length);
        if (prev >= length)
            return -1;
    }

    // Doing a linear search for x in block
    // beginning with prev.
    while (arr[prev] < target) {
        prev++;

        // If we reached next block or end of
        // array, element is not present.
        if (prev == Math.min(step, length))
            return -1;
    }
    // If element is found
    if (arr[prev] == target)
        return prev;

    return -1;
}

let arr = [2, 4, 4, 5, 6, 7, 8, 9, 11]
let target = 9
let start = 0
let end = arr.length - 1

let result = ternarySearch(arr, start, end, target)
console.log(result)