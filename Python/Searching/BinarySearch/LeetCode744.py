class Solution(object):
    def nextGreatestLetter(self, letters, target):
        left = 0
        right = len(letters) - 1
    
        while(left <= right):
            mid = (left + right)//2
            if(letters[mid] == target):
                left = mid + 1
            
            elif(letters[mid] < target):
                left = mid + 1
            else:
                right = mid -1
            
        if(left == len(letters)):
            return letters[0]
        
        return letters[left]
    

if __name__ == '__main__':
    letters = ['c','f','j'];
    target = 'c';
    
    sol = Solution()
    
    print(sol.nextGreatestLetter(letters, target))
    