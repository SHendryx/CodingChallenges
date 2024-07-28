># 704. Binary Search [Easy]
>Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
>
>You must write an algorithm with O(log n) runtime complexity.
>
>Example 1:  
>Input: nums = [-1,0,3,5,9,12], target = 9  
>Output: 4  
>Explanation: 9 exists in nums and its index is 4  
>
>Example 2:  
>Input: nums = [-1,0,3,5,9,12], target = 2  
>Output: -1  
>Explanation: 2 does not exist in nums so return -1  
>
>Constraints:  
>1 <= nums.length <= 104  
>-104 < nums[i], target < 104  
>All the integers in nums are unique.  
>nums is sorted in ascending order.  
>
>## Solution:
>Using the binary search algorithm to search the array, we pick a middle point in the array to start looking for the target number. If the target number is greater than the number we found, we set the index of the start position to one index greater, and then pick the middle point between the start and end search positions. If the target is less than the number we found, we set the end index to one index less, and then pick the middle point between the start and the end indexes. This can be solved with recursion or a while loop. We must also check on each iteration whether or not the start index is less than the end index. If they are not, the target number doesn't exist in the array.
>
>#### Python Solution: [704_Binary_Search.py](/python/704_Binary_Search.py)
>#### C++ Solution: [704_Binary_Search.cpp](/c++/704_Binary_Search.cpp)
>
>## Time Complexity:
>Time complexity is O(log n).
>
>## Space Complexity:
>Space complexity is O(1).