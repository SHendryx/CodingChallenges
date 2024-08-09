># 153. Find Minimum in Rotated Sorted Array [Medium]
>Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:  
>[4,5,6,7,0,1,2] if it was rotated 4 times.  
>[0,1,2,4,5,6,7] if it was rotated 7 times.  
>Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
>
>Given the sorted rotated array nums of unique elements, return the minimum element of this array.
>
>You must write an algorithm that runs in O(log n) time.
>
>Example 1:  
>Input: nums = [3,4,5,1,2]  
>Output: 1  
>Explanation: The original array was [1,2,3,4,5] rotated 3 times.
>
>Example 2:  
>Input: nums = [4,5,6,7,0,1,2]  
>Output: 0  
>Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
>
>Example 3:  
>Input: nums = [11,13,15,17]  
>Output: 11  
>Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
>
>Constraints:  
>n == nums.length  
>1 <= n <= 5000  
>-5000 <= nums[i] <= 5000  
>All the integers of nums are unique.  
>nums is sorted and rotated between 1 and n times.
>
>## Solution:
>The solution is a binary search where we are checking if the element in the middle is greater than the element at the end of the array. If it is greater, then we know the minimum element is located between the middle element and the rightmost element. So we move the leftmost index to the middle element plus 1. Otherwise, the minimum is between the middle element and the leftmost element, so we move the rightmost index to the middle. We cannot move both indices past the middle element otherwise we have an edgecase where we can skip over the minimum element. It's possible to add an additional check to see if the middle element is the minimum by checking its adjacent elements, but we'd also have to check if those elements are inside the array bounds as well.
>
>#### Python Solution:[153_Find_Minimum_In_Rotated_Sorted_Array.py](/python/153_Find_Minimum_In_Rotated_Sorted_Array.py)
>#### C++ Solution:[153_Find_Minimum_In_Rotated_Sorted_Array.cpp]