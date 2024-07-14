># 42. Trapping Rain Water [Hard]
>Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
>
>![image](/images/rainwatertrap.png)  
>Example 1:  
>Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]  
>Output: 6  
>Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
>
>Example 2:  
>Input: height = [4,2,0,3,2,5]  
>Output: 9  
> 
>Constraints:  
>n == height.length  
>1 <= n <= 2 * 104  
>0 <= height[i] <= 105
>
>## Solution:
>My intuition is that I can solve this in O(n) time by using some similar methods from #11 Container With Most Water. If I iterate through the array and after finding an element, calculate the area of the empty space bounded by it until I find another element equal or larger, and then and only then include that empty space, I should be able to find the amount of water stored.
>
>Update: Essentially this is the method I used, but to be more clear, I used two pointers and recorded the max height I had seen of each, and added the difference only if the current height was lower than the max height. Otherwise I updated the max height. I chose to move the pointers based on whichever one was a lower height, or moved the left if they were the same.
>
>#### Python Solution: [42_Trapping_Rain_Water.py](/python/42_Trapping_Rain_Water.py)
>
>#### C++ Solution: [42_Trapping_Rain_Water.cpp](/c++/42_Trapping_Rain_Water.cpp)
>
>## Time Complexity:
>Time complexity is O(n).
>
>## Space Complexity:
>Space complexity is O(1).