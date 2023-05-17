function nextGreatestLetter(letters: string[], target: string): string {
    let left = 0;
    let right = letters.length - 1;


    while(left <= right){
        let mid = Math.floor((left + right)/2);

        if(letters[mid] == target){
            left = mid + 1;
        }

        else if(letters[mid] > target){
            right = mid -1;
        }

        else{
            left = mid + 1;
        }
    }
    
    if(left == letters.length){
        return letters[0];
    }

    return letters[left]; 
};

let letters = ['c','f','j'];
let target = 'c';
console.log(nextGreatestLetter(letters, target));