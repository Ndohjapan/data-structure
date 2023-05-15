/**
 * ArrayDeclaration
 */
public class ArrayDeclaration {

    public static void main(String[] args) {
        
        int arr[];

        arr = new int[5];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;

        for (int i = 0; i < arr.length; i++) {
            System.out.print("Element at index " + i + " : " + arr[i] + "\n");
        }

        for (int i : arr) {
            System.out.print(i);
        }
    }
}