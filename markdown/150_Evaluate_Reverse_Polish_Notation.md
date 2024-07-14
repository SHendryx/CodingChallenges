># 150. Evaluate Reverse Polish Notation [Medium]
>You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
>
>Evaluate the expression. Return an integer that represents the value of the expression.
>
>Note that:  
>The valid operators are '+', '-', '*', and '/'.  
>Each operand may be an integer or another expression.  
>The division between two integers always truncates toward zero.  
>There will not be any division by zero.  
>The input represents a valid arithmetic expression in a reverse polish notation.  
>The answer and all the intermediate calculations can be represented in a 32-bit integer.  
>
>Example 1:  
>Input: tokens = ["2","1","+","3","*"]  
>Output: 9  
>Explanation: ((2 + 1) * 3) = 9  
>
>Example 2:  
>Input: tokens = ["4","13","5","/","+"]  
>Output: 6  
>Explanation: (4 + (13 / 5)) = 6  
>
>Example 3:  
>Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]  
>Output: 22  
>Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5  
>= ((10 * (6 / (12 * -11))) + 17) + 5  
>= ((10 * (6 / -132)) + 17) + 5  
>= ((10 * 0) + 17) + 5  
>= (0 + 17) + 5  
>= 17 + 5  
>= 22  
>
>Constraints:  
>1 <= tokens.length <= 104  
>tokens[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-200, 200].  
>
> ## Solution:
>The solution is fairly simple if using a stack. If it's a number, add it to the stack. If it's an opperand, perform the calculation pulling the previous two numbers off the stack. The second number on the stack is the number the opperand is being applyed to by the first number on the stack. The value you get from the calculation is then pushed back onto the stack. After all calculations have been done, return the number on the stack.
> #### Python Solution: [150_Evaluate_Reverse_Polish_Notation.py](/python/150_Evaluate_Reverse_Polish_Notation.py)
> #### C++ Solution: [150_Evaluate_Reverse_Polish_Notation.cpp]()
> ## Time Complexity:
>Time complexity is O(n).
>
> ## Space Complexity:
>Space complexity is O(n).
