char nextGreatestLetter(char* letters, int lettersSize, char target){
    int start = 0;
    int end = lettersSize - 1;


    while(start <= end){
        int mid = (start + end)/2;

        if(letters[mid] == target){
            start = mid + 1;
        }

        else if(letters[mid] > target){
            end = mid -1;
        }

        else{
            start = mid + 1;
        }
    }
    
    if(start == lettersSize){
        return letters[0];
    }

    return letters[start];
}