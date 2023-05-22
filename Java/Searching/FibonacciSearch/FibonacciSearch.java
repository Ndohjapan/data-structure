public class FibonacciSearch {
    public static int search(int[] arr, int target) {
        int n = arr.length;
        int fib2 = 0;
        int fib1 = 1;
        int fib = fib1 + fib2;
        while (fib < n) {
            fib2 = fib1;
            fib1 = fib;
            fib = fib1 + fib2;
        }
        int offset = -1;
        while (fib > 1) {
            int i = Math.min(offset + fib2, n - 1);
            if (arr[i] < target) {
                fib = fib1;
                fib1 = fib2;
                fib2 = fib - fib1;
                offset = i;
            } else if (arr[i] > target) {
                fib = fib2;
                fib1 = fib1 - fib2;
                fib2 = fib - fib1;
            } else {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 3, 5, 7, 10, 12, 15, 18, 21, 23, 26, 28, 31, 34, 37, 40, 43 };
        int target = 43;
        System.out.print(search(arr, target));
    }
}
