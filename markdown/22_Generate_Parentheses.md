># 22. Generate Parentheses [Medium]
>Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
>
>Example 1:  
>Input: n = 3  
>Output: ["((()))","(()())","(())()","()(())","()()()"]  
>
>Example 2:  
>Input: n = 1  
>Output: ["()"]  
>
>Constraints:  
>1 <= n <= 8
>
>## Solution:
>The solution to this problem was not immediately obvious to me. It turns out to be a backtracking recursive problem. The way it works is by knowing the number of parentheses, we can recursively create open parenthese until we hit the maximum number. Then we begin closing parentheses. Because it's recursive, we end up exploring all possible valid variants of opened and closed parentheses.
>
> Example output (n=3):  
>```
>((()))  
>(()())  
>(())()  
>()(())  
>()()()  
>```
>#### Python Solution: [22_Generate_Parentheses.py](/python/22_Generate_Parentheses.py)
>#### C++ Solution: [22_Generate_Parentheses.cpp](/c++/22_Generate_Parentheses.cpp)
>
>## Time Complexity:
>Time complexity is O(n<sup>2</sup>) due to recursion.
>
>## Space Complexity:
>Space complexity is O(n).