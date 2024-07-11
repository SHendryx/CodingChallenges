> # 238. Product of Array Except Self [Medium]
>Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
>
>The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
>
>You must write an algorithm that runs in O(n) time and without using the division operation.
>
>Example 1:  
>Input: nums = [1,2,3,4]  
>Output: [24,12,8,6]  
>
>Example 2:  
>Input: nums = [-1,1,0,-3,3]  
>Output: [0,0,9,0,0]  
>
>Constraints:  
>2 <= nums.length <= 105  
>-30 <= nums[i] <= 30  
>The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
>
>Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
>
> ## Solution:
> I iterate through the array starting at index 1, and ending at the end of the array, multiplying each previous element. I then iterate through the array from the 2nd to the last element to the first, multiplying each previous element. This gives me a total of all elements of the array multiplied excluding the current element.
> #### C++ Solution: [238_Product_Of_Array_Except_Self.cpp](/c++/238_Product_Of_Array_Except_Self.cpp)
> #### Python Solution: [238_Product_Of_Array_Except_Self.py](/python/238_Product_Of_Array_Except_Self.py)
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(n) if you include the result array.