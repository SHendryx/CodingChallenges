> # 1. Two Sum [Easy]
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
>
> Python Solution: [1_Two_Sum.py](/python/1_Two_Sum.py)  
> C++ Solution: [1_Two_Sum.cpp](/c++/1_Two_Sum.cpp)
>
> ## Time Complexity:
> Time Complexity is O(n).
>
> ## Space Complexity:
> Space Complexity is O(2n) or O(n) due to the additional hashmap.

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
> ### C++:
> I used an unordered_map and enumerate through each value in the list. If the value of the key in the unordered_map is greater than 0, we have already seen this element and return true. Otherwise, we increment the value by 1 indicating we have just seen this element for the first time.
>
> Python Solution: [217_Contains_Duplicate.py](/python/217_Contains_Duplicate.py)  
> C++ Solution: [217_Contains_Duplicate.cpp](/c++/217_Contains_Duplicate.cpp)
>
> ## Time Complexity:
> Time Complexity is O(n) when storing a list to a set.
> ## Space Complexity:
> Space complexity is O(2n) which is O(n).

> # 242: Valid Anagram [Easy]
>Given two strings s and t, return true if t is an anagram of s, and false otherwise.
>
>An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
>
>Example 1:  
>Input: s = "anagram", t = "nagaram"  
>Output: true  
>
>Example 2:  
>Input: s = "rat", t = "car"  
>Output: false
>
>Constraints:  
>1 <= s.length, t.length <= 5 * 104  
>s and t consist of lowercase English letters.  
>
>Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
>
> ## Solution:
> ### Python:
> First I compare the length of each string. If they are different lengths, I return False. I then create two dictionaries. In each dictionary I increment a count of how many times each character is seen in each string. Afterwards, I increment through one of the dictionaries and compare the count of each character against the count of that same character from the other dictionary. If they aren't equal, I return False. Otherwise, I return True. Since I have compared the lengths of the strings, it's impossible to miss cases where one string contains a character the other string does not.
>
> ### C++:
> I compare the length of each string. If they are different lengths, I return False. I created one unordered_map. While iterating through the characters of the strings, I increment the value at the key of the unordered_map for one string, and decrement the value at the key for the other string. Afterwards, I again iterate through the keys of the unordered_map. If the value is ever non-zero, we hve a mismatch, and return False. Otherwise, I return True.
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(2n) which is O(n).