// Returns index of the target number being searched for


public class BinarySearch {
    public static void main(String[] args){
        int arr[] = {-2, 3, 4, 7, 8 ,9, 11, 13, 16, 17, 22, 26, 32};
        int target = 17;

        int result = search(arr, target);

        System.out.print(result);
    }

    public static int search(int arr[], int target){
        int left = 0;
        int right = arr.length - 1;


        while(left <= right){
            int mid = (left + right)/2;

            if(arr[mid] == target){
                return mid;
            }

            else if(arr[mid] > target){
                right = mid -1;
            }

            else{
                left = mid + 1;
            }
        }
        
        return -1;
    }
}
