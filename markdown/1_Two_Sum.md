># 1. Two Sum [Easy]
>Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
>
>You may assume that each input would have exactly one solution, and you may not use the same element twice.
>
>You can return the answer in any order.
>
>Example 1:  
>Input: nums = [2,7,11,15], target = 9  
>Output: [0,1]  
>Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
>
>Example 2:  
>Input: nums = [3,2,4], target = 6  
>Output: [1,2]  
>
>Example 3:  
>Input: nums = [3,3], target = 6  
>Output: [0,1]  
>
>Constraints:  
>2 <= nums.length <= 104  
>-109 <= nums[i] <= 109  
>-109 <= target <= 109  
>Only one valid answer exists.
>
>Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
>
> ## Solution:
> My first instinct is to sort the list and use two indexes, but then I will have indices that don't match the indices from the original list. Also, if I try to use the values to get the indices from the original list, I will have to develop logic to get around cases where the same number (different indices) is used twice.  
>
> Brute forcing it will require a Time Complexity of O(n<sup>2</sup>).  
>
> A Hashmap with the key being the (target-value) and the value being the index, will allow me to check if a key exists and obtain the index of the matching value. It's a confusing approach because it's not extremely obvious what is happening, but it's elegant.  
> #### Python Solution: [1_Two_Sum.py](/python/1_Two_Sum.py)  
> #### C++ Solution: [1_Two_Sum.cpp](/c++/1_Two_Sum.cpp)
>
> ## Time Complexity:
> Time Complexity is O(n).
>
> ## Space Complexity:
> Space Complexity is O(2n) or O(n) due to the additional hashmap.