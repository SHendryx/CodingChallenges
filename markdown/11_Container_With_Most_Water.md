># 11. Container With Most Water [Medium]
>You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
>
>Find two lines that together with the x-axis form a container, such that the container contains the most water.
>
>Return the maximum amount of water a container can store.
>
>Notice that you may not slant the container.
>
>Example 1:  
>Input: height = [1,8,6,2,5,4,8,3,7]  
>Output: 49  
>Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
>
>Example 2:  
>Input: height = [1,1]  
>Output: 1  
>
>Constraints:  
>n == height.length  
>2 <= n <= 105  
>0 <= height[i] <= 104  
>
>## Solution:
>This is a two-pointer problem. Starting the pointers at each end of the array you can calculate the maximum area using the minimum height of the two elements and the distance between the two pointers. I decided to move the pointer that had the shortest height, and in cases where the heights were equal, moving the left pointer. I also calculated the largest area possible between the two pointers if both were the maximum height found in the array. If that hypothetical maximum area was less than the maximum area I have already found, then I break out of the loop entirely, skipping extra calculations that aren't neccessary.
>
>#### Python Solution: [11_Container_With_Most_Water.py](/python/11_Container_With_Most_Water.py)
>#### C++ Solution: [11_Container_With_Most_Water.cpp](/c++/11_Container_With_Most_Water.cpp)
>
>## Time Complexity:
>Time complexity is O(n).
>
>## Space Complexity:
>Space complexity is O(1).