public class interpolationSearch {
    public static int search(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end && arr[start] <= target && arr[end] >= target) {
            int probe = (start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
            if (arr[probe] == target) {
                return probe;
            }
            if (arr[probe] > target) {
                end = probe - 1;
            } else {
                start = probe + 1;
            }
        }
        return -1;
    }

    public static int search_recursion(int[] arr, int start, int end, int target) {
        if (arr[start] > target || arr[end] < target) {
            return -1;
        }
        int probe = (start + ((end - start) * (target - arr[start])) / (arr[end] - arr[start]));
        if (arr[probe] == target) {
            return probe;
        }
        if (arr[probe] > target) {
            return search_recursion(arr, start, probe - 1, target);
        }
        else {
            return search_recursion(arr, probe + 1, end, target);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 2, 3, 4, 4, 5, 6, 8, 9 };
        int target = 4;
        // int result = search(arr, target);
        int result = search_recursion(arr,0, arr.length - 1, target);
        System.out.print(result);
    }
}
