># 84. Largest Rectangle in Histogram [Hard]
>Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
>
>Example 1:  
>![image](/images/histogram.jpg)  
>Input: heights = [2,1,5,6,2,3]  
>Output: 10  
>Explanation: The above is a histogram where width of each bar is 1.
>The largest rectangle is shown in the red area, which has an area = 10 units.
>
>Example 2:  
>![image](/images/histogram-1.jpg)  
>Input: heights = [2,4]  
>Output: 4  
>
>Constraints:  
>1 <= heights.length <= 105  
>0 <= heights[i] <= 104  
>
>## Solution:
>The solution uses a monotonic stack. We iterate through the array and if the height at the current index is less than the heigh on the stack, we pop off elements from the stack and calculate the area that element covers using it's height and the start of that height. We continue doing this until the height at the current index is greater than the height of the stack. We put item on the stack with the earliest index possible and that height.
>
>We then have to go through the remainder of the stack and calculate the areas of the remaining heights.
>
>#### Python Solution: [84_Largest_Rectangle_In_Histogram.py](/python/84_Largest_Rectangle_In_Histogram.py)
>#### C++ Solution: [84_Largest_Rectangle_In_Histogram.cpp](/c++/84_Largest_Rectangle_In_Histogram.cpp)
>
>## Time Complexity:
>Time complexity is O(n).
>
>## Space Complexity:
>Space complexity is O(n).