package Java.Searching.LinearSearch;
class Solution {
    public int search(int arr[], int n, int k) {
	    for(int i=0; i<n; i++){
	        if(arr[i] == k){
	            return (i+1);
	        }
	    }
	    
	    return -1;
        // code here
    }
}

class LinearSearch{
    public static void main(String[] args){
        Solution sol = new Solution();

        int[] arr = {12, 3, 4, 5, 67, 12};

        int n = arr.length;
        
        int k = 67;

        int result = sol.search(arr, n, k);

        System.out.print(result);

    }
}