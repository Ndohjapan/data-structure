class Solution:
    def search(self, arr, n, k):
        for i in range(n):
            if(arr[i] == k):
                return (i+1)
            
        return -1


sol = Solution()

arr = [10, 2, 23, 7, 4, 1]
n = len(arr)
k = 4

result = sol.search(arr, n, k)

print(result)
