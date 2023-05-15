public class ReturnArraysFromFunctions {
    public static void main(String[] args){
        int[] arr = m1(6);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    
    public static int[] m1(int num){
        int arr[] = new int[num];

        for (int i = 0; i < num; i++) {
            arr[i] = i+1;
        }

        return arr;
    }
}
