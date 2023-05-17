public class LeetCode34 {
    public static int[] searchRange(int[] nums, int target) {
        int end = nums.length - 1;
        int start = 0;
        int endCount = -1;
        int startCount = -1;
        int[] result = {0, 0}; 

        while(start <= end &&  (startCount == -1 || endCount == -1)){
            if(nums[start] == target){
                startCount = start;
            }
            else if(nums[start] != target){
                start++;
            }

            if(nums[end] == target){
                endCount = end;
            }

            else if(nums[end] != target){
                end--;
            }
        }

        result[0] = startCount;
        result[1] = endCount;
        return result;
    }

    public static void main(String[] args){
        int[] nums = {5};
        int target = 5;

        int[] result = searchRange(nums, target);

        for(int i=0; i<result.length; i++){
            System.out.print(result[i]+" ");
        }
    }
}
