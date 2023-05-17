public class LeetCode744 {

    public static void main(String[] args){
        char[] letters = {'c','f','j'};
        char target = 'c';

        char result = nextGreatestLetter(letters, target);

        System.out.print(result);
    }

    public static char nextGreatestLetter(char[] letters, char target) {
        int start = 0;
        int end = letters.length - 1;


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
        
        if(start == letters.length){
            return letters[0];
        }

        return letters[start];
    }
}
