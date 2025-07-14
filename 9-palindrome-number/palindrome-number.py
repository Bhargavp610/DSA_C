class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        num = x
        reversed = 0
        
        while(num > 0):
            Last_digit = num % 10
            reversed = reversed * 10 + Last_digit
            num = num // 10
        
        if x == reversed:
            return True
        else:
            return False


