> # 217: Contains Duplicate [Easy]
>Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
>
>Example 1:  
>Input: nums = [1,2,3,1]  
>Output: true
>
>Example 2:  
>Input: nums = [1,2,3,4]  
>Output: false  
>
>Example 3:  
>Input: nums = [1,1,1,3,3,4,3,2,4,2]  
>Output: true  
>
>Constraints:  
>1 <= nums.length <= 105  
>-109 <= nums[i] <= 109
>
> ## Solution:
> ### Python:
> Converting the list to a set and testing to see if the length of the list and set are different is sufficient enough to see if there are any duplicates.  
> #### Python Solution: [217_Contains_Duplicate.py](/python/217_Contains_Duplicate.py)  
>
> ### C++:
> I used an unordered_map and enumerate through each value in the list. If the value of the key in the unordered_map is greater than 0, we have already seen this element and return true. Otherwise, we increment the value by 1 indicating we have just seen this element for the first time.  
> #### C++ Solution: [217_Contains_Duplicate.cpp](/c++/217_Contains_Duplicate.cpp)
>
> ## Time Complexity:
> Time Complexity is O(n) when storing a list to a set.
> ## Space Complexity:
> Space complexity is O(2n) which is O(n).