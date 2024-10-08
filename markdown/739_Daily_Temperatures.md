># 739. Daily Temperatures [Medium]
>Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
>
>Example 1:  
>Input: temperatures = [73,74,75,71,69,72,76,73]  
>Output: [1,1,4,2,1,1,0,0]
>
>Example 2:  
>Input: temperatures = [30,40,50,60]  
>Output: [1,1,1,0]
>
>Example 3:  
>Input: temperatures = [30,60,90]  
>Output: [1,1,0]
>
>Constraints:  
>1 <= temperatures.length <= 105  
>30 <= temperatures[i] <= 100
>
> ## Solution:
>This solution wasn't intuitive to me. I found a solution that traverses the array that is a little more intuitive, however they are very similar. Essentially we traverse the array and for each day, we indicate how many days have past since a higher temperature was seen. In reverse, it's a little simpler since we push only the index to the stack for days that are higher than the next, and calculate the number of days off the index on the top of the stack.
>
> #### Python Solution: [739_Daily_Temperatures.py](/python/739_Daily_Temperatures.py)
> #### C++ Solution: [739_Daily_Temperatures.cpp](/c++/739_Daily_Temperatures.cpp)
>
>## Time Complexity:
> Time complexity is O(n).
>
>## Space Complexity:
> Space complexity is O(n).