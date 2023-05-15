public class CloneArray {
    public static void main(String args[])
    {
        int intArray[] = { 1, 2, 3 };
 
        int cloneArray[] = intArray.clone();
 
        // will print false as deep copy is created
        // for one-dimensional array
        System.out.println(intArray == cloneArray);
 
        for (int i = 0; i < cloneArray.length; i++) {
            System.out.print(cloneArray[i] + " ");
        }

        int intArray_2d[][] = { { 1, 2, 3 }, { 4, 5 } };
 
        int cloneArray_2d[][] = intArray_2d.clone();
 
        // will print false
        System.out.println(intArray_2d == cloneArray_2d);
 
        // will print true as shallow copy is created
        // i.e. sub-arrays are shared
        System.out.println(intArray_2d[0] == cloneArray_2d[0]);
        System.out.println(intArray_2d[1] == cloneArray_2d[1]);
    }

}
