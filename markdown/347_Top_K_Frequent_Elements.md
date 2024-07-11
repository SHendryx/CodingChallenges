> # 347. Top K Frequent Elements [Medium]
>Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.
>
>Example 1:  
>Input: nums = [1,1,1,2,2,3], k = 2  
>Output: [1,2]  
>
>Example 2:  
>Input: nums = [1], k = 1  
>Output: [1]  
>
>Constraints:  
>1 <= nums.length <= 105  
>-104 <= nums[i] <= 104  
>k is in the range [1, the number of unique elements in the array].  
>It is guaranteed that the answer is unique.  
>
>Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
>
> ## Solution:
> ### C++ Solution:
> I used an unordered_map to store the number of times each number was seen in the list. I then iterated through the unordered_map and pushed the count and the number onto a priority_queue. Again I itterated through the priority_queue and popped off the k numbers from the top of the priority_queue for the result.  
>[347_Top_K_Frequent_Elements.cpp](/c++/347_Top_K_Frequent_Elements.cpp)
>
> ### Python Solution:
> I used a dictionary to store counts of each element in the list. Using these counts, I appended the element (num) to a list index equal to the count of that element. This resulted in a list of lists of frequencies of elements. I then iterated through the list, in reverse order (most frequent to least frequent) and appended k values to a list of results and returned this.  
>[347_Top_K_Frequent_Elements.py](/python/347_Top_K_Frequent_Elements.py)
>
> ## Time Complexity:
> Time complexity of both solutions is O(n).
>
> ## Space Complexity:
> Space complexity is O(3n) or O(n) for both solutions.