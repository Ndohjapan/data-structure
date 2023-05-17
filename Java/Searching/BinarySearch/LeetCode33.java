public class LeetCode33 {
    public static int search(int[] nums, int target){
        int start = 0;
        int end = nums.length - 1;

        while(end >= start){
            int mid = (start+end)/2;
            if(nums[mid] == target){
                return mid;
            }
            
            // Default checking to enter the left side
            else if(nums[mid] > target){
                // check properly before entering the left side
                if(nums[start] <= target || nums[mid] < nums[start]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }

            // Default checking to enter the right side
            else{
                // Check properly before entering the right side
                if(nums[end] >= target || nums[mid] > nums[end]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        
        return -1;
    }    

    public static void main(String[] args) {
        // int[] num = {5, 6, 7, 8, 9, 10, 11, 12, 0, 1, 2, 3};
        // int[] num = {12, 18, 0, 2, 3, 4, 5, 7, 8, 9, 10, 11};
        int[] num = {11, 18, 0, 2, 3, 4, 5, 7, 8, 9, 10, 11};
        int target = 19;

        int result = search(num, target);

        System.out.print(result);
    }
}
