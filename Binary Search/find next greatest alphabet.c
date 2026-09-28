class Solution(object):
    def nextGreatestLetter(self, letters, target):
        """
        :type letters: List[str]
        :type target: str
        :rtype: str
        """
        n = 0
        for _ in letters:
            n +=1
        left , right = 0 , n-1
         
        while left <= right:
            mid = left + (right - left) // 2
            if letters[mid] <= target:
                left = mid + 1 
            else:
                right = mid - 1
        return letters[left % n ]
        