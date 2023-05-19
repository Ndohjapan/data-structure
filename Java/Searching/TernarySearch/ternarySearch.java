public class ternarySearch {
    public static int search(int[] arr, int start, int end, int target){
        if (start <= end) {
            int mid1 = start + ((end - start) / 3);
            int mid2 = end - ((end - start) / 3);
            if (arr[mid1] == target) {
                return mid1;
            }
            if (arr[mid2] == target) {
                return mid2;
            }
            if (target < arr[mid1]) {
                return search(arr, start, mid1 - 1, target);
            }
            else if (target > arr[mid2]) {
                return search(arr, mid2 + 1, end, target);
            }
            else {
                return search(arr, mid1 + 1, mid2 - 1, target);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {2, 4, 4, 5, 6, 7, 8, 9, 11};
        int start = 0;
        int end = arr.length - 1;
        int target = 9;

        System.out.print(search(arr, start, end, target));
    }
}
