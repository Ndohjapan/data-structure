public class LeetCode34 {
    public static int[] search(int arr[], int target){
        int[] result = {-1, -1};

        result[0] = getIndex(arr, target, true);
        if(result[0] != -1){
            result[1] = getIndex(arr, target, false);
        }

        return result;
    }

    public static int getIndex(int arr[], int target, boolean startIndex){
        
        int start = 0;
        int end = arr.length - 1;
        int ans = -1;
        
        while(start <= end){
            int mid = (start + end)/2;

            if(arr[mid] == target){
                // potential answer is found
                ans = mid;

                if(startIndex){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }

            }

            else if(arr[mid] > target){
                end = mid -1;
            }

            else{
                start = mid + 1;
            }
        }

        return ans;
    }

    public static void main(String[] args){
        int arr[] = {5, 7, 7, 8, 8, 10};
        int target = 8;

        int[] result = search(arr, target);

        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i]+" ");
        }
    }
}
