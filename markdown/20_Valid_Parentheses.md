> # 20. Valid Parentheses [Easy]
>Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
>
>An input string is valid if:  
>Open brackets must be closed by the same type of brackets.  
>Open brackets must be closed in the correct order.  
>Every close bracket has a corresponding open bracket of the same type.  
>
>Example 1:  
>Input: s = "()"  
>Output: true
>
>Example 2:  
>Input: s = "()[]{}"  
>Output: true
>
>Example 3:  
>Input: s = "(]"  
>Output: false  
>
>Constraints:  
>1 <= s.length <= 104  
>s consists of parentheses only '()[]{}'.
>
>## Solution:
>The answer seems pretty straightforward. Iterate through each character in the string. If the character is an open bracket, append it to a list. If the character is a closing bracket, compare it to the last element of the list to see if it is a matching open bracket.
> 
>There are some important details such as popping the last item off the list when checking for a matching open bracket. Also testing that the list is empty before returning True. Finally, if we come across a closing bracket, we need to verify the list has any elements to pop off before blindly trying to pop an element off an empty list. If we have a closing bracket, and the string is empty, we can return 'False' because it cannot be valid.
>
> #### Python Solution: [20_Valid_Parentheses.py](/python/20_Valid_Parentheses.py)
> #### C++ Solution: [20_Valid_Parentheses.cpp](/c++/20_Valid_Paraentheses.cpp)