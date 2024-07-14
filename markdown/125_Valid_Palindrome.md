> # 125. Valid Palindrome [Easy]
>A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
>
>Given a string s, return true if it is a palindrome, or false otherwise.
>
>Example 1:  
>Input: s = "A man, a plan, a canal: Panama"  
>Output: true  
>Explanation: "amanaplanacanalpanama" is a palindrome.  
>
>Example 2:  
>Input: s = "race a car"  
>Output: false  
>Explanation: "raceacar" is not a palindrome.  
>
>Example 3:  
>Input: s = " "  
>Output: true  
>Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
>
>Constraints:  
>1 <= s.length <= 2 * 105  
>s consists only of printable ASCII characters.  
>
> ## Solution:
>First I removed any non-alphanumeric character from the array. Then I used two pointers at each end of the array and compare the characters while iterating towards the center to see if they match.
>
> #### Python Solution: [125_Valid_Palindrome.py](/python/125_Valid_Palindrome.py)
> #### C++ Solution: [125_Valid_Palindrome.cpp](/c++/125_Valid_Palindrome.cpp)
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(n).