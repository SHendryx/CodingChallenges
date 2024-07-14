import re

class Valid_Palindrome:
  def isPalindrome(self, s: str) -> bool:
    ## Original attempt using two pointers:
    ## O(n) time complexity
    ## Another method is to reverse the string and compare the two strings.
    if len(s) < 2:
      return True
    s = re.sub(r'[^a-zA-Z0-9]', '', s.lower())
    for i in range(len(s)):
      j = i+1
      # print(f'{s[i]} == {s[-j]}')
      if s[i] != s[-j]:
        return False
    return True
