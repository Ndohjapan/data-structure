// JavaScript Recursive Code For Linear Search

let linearsearch = (arr, size, key) => {
    if (size == 0) {
        return -1;
    }
    else if (arr[size - 1] == key)
    {
    
        // Return the index of found key.
        return size - 1;
    }
    else
    {
        let ans = linearsearch(arr, size - 1, key);
        return ans;
    }
    };
    
    // Driver Code
    let main = () => {
    let arr = [5, 15, 6, 9, 4];
    let key = 4;
    let ans = linearsearch(arr, 5, key);
    if (ans == -1) {
        console.log(`The element ${key} is not found.`);
    } else {
        console.log(
        `The element ${key} is found at ${ans} index of the given array.`
        );
    }
    return 0;
    };
    
    main();
    
    // This code is contributed by Aman Singla...
    