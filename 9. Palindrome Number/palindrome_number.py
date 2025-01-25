class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x < 10:
            return True
        a = x
        b = 0
        while x != 0:
            b += x % 10
            b *= 10
            x = x // 10
        return a == b // 10 

# test
solution = Solution()
print(solution.isPalindrome(1234321))