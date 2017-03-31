class Solution(object):
    def lengthOfLongestSubstring(self, s):
        '''
        :type s: str
        :rtype: int
        '''
        result = ""    #empty string
        longest_so_far = 0
        for i in s:
            if (i in result):
                result = result[result.index(i)+1:] + i 
            else:
                result += i
                longest_so_far = max(len(result), longest_so_far)
        return longest_so_far