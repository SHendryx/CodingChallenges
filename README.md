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
> #### Python Solution: [1_Two_Sum.py](/python/1_Two_Sum.py)  
> #### C++ Solution: [1_Two_Sum.cpp](/c++/1_Two_Sum.cpp)
>
> ## Time Complexity:
> Time Complexity is O(n).
>
> ## Space Complexity:
> Space Complexity is O(2n) or O(n) due to the additional hashmap.

> # 36. Valid Sudoku [Medium]
>Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
>
>Each row must contain the digits 1-9 without repetition.  
>Each column must contain the digits 1-9 without repetition.  
>Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.  
>Note:  
>A Sudoku board (partially filled) could be valid but is not necessarily solvable.  
>Only the filled cells need to be validated according to the mentioned rules.  
>```
>Example 1:  
>Input: board =   
>[["5","3",".",".","7",".",".",".","."]  
>,["6",".",".","1","9","5",".",".","."]  
>,[".","9","8",".",".",".",".","6","."]  
>,["8",".",".",".","6",".",".",".","3"]  
>,["4",".",".","8",".","3",".",".","1"]  
>,["7",".",".",".","2",".",".",".","6"]  
>,[".","6",".",".",".",".","2","8","."]  
>,[".",".",".","4","1","9",".",".","5"]  
>,[".",".",".",".","8",".",".","7","9"]]
>Output: true  
>
>Example 2:  
>Input: board =  
>[["8","3",".",".","7",".",".",".","."]  
>,["6",".",".","1","9","5",".",".","."]  
>,[".","9","8",".",".",".",".","6","."]  
>,["8",".",".",".","6",".",".",".","3"]  
>,["4",".",".","8",".","3",".",".","1"]  
>,["7",".",".",".","2",".",".",".","6"]  
>,[".","6",".",".",".",".","2","8","."]  
>,[".",".",".","4","1","9",".",".","5"]  
>,[".",".",".",".","8",".",".","7","9"]]  
>Output: false
>```
>Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
>
> ## Solution:
> I first defined 3 hashsets or sets to hold the numbers found in each row, each column, and each 3x3 square on the board. Iterating through the board by row and column, and checking to see if the number at that location already exists in any of the sets allows us to determine if the board is valid.
>
> ### C++ Solution:
>[36_Valid_Sudoku.cpp](/c++/36_Valid_Sudoku.cpp)
> ### Python Solution:
>[36_Valid_Sudoku.py](/python/36_Valid_Sudoku.py)
>
> ## Time Complexity:
> Time complexity should be O(n), n being the size of the board.
> ## Space Complexity:
> Space complexity is O(n).

> # 49. Group Anagrams [Medium]
>Given an array of strings strs, group the anagrams together. You can return the answer in any order.
>
>An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
>
>Example 1:  
>Input: strs = ["eat","tea","tan","ate","nat","bat"]  
>Output: [["bat"],["nat","tan"],["ate","eat","tea"]]  
>
>Example 2:  
>Input: strs = [""]  
>Output: [[""]]  
>
>Example 3:  
>Input: strs = ["a"]  
>Output: [["a"]]
>
>Constraints:  
>1 <= strs.length <= 104  
>0 <= strs[i].length <= 100  
>strs[i] consists of lowercase English letters.  
>
> ## Solution:
> By iterating through each word in the list, and sorting the characters of the word we can obtain a usable key for a hash. Using that key with a unordered_map or hashmap, and pushing the unaltered word to the vector or list stored in the unordered_map/hashmap, we can collect all the words that are anagrams of each other.  
> #### Python Solution: [49_Group_Anagrams.py](/python/49_Group_Anagrams.py)  
> #### C++ Solution: [49_Group_Anagrams.cpp](/c++/49_Group_Anagrams.cpp)
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(2n) which is O(n).

> # 128: Longest Consecutive Sequence [Medium]
>Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
>
>You must write an algorithm that runs in O(n) time.
>
>Example 1:  
>Input: nums = [100,4,200,1,3,2]  
>Output: 4  
>Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.  
>
>Example 2:  
>Input: nums = [0,3,7,2,5,8,4,6,0,1]  
>Output: 9  
>
>Constraints:  
>0 <= nums.length <= 105  
>-109 <= nums[i] <= 109  
>
>## Solution:
>My initial idea was to sort the input array and then iterate through the array to find the longest consecutive sequence, however sorting has a time complexity of O(n log n), and it must be O(n) time.
>
>My second attempt instead iterates through every number at most twice, and therefore is O(n) time. Inserting the elements into a set and iterating through the set finding elements that have no element that comes immediately before it, then find elements in the set that are consecutive, means each element is inspected a couple of times. Lookups of a set has a time complexity of O(1) as well.
>#### Python Solution: [128_Longest_Consecutive_Sequence.py](/python/128_Longest_Consecutive_Sequence.py)  
>#### C++ Solution: [128_Longest_Consecutive_Sequence.cpp](/c++/128_Longest_Consecutive_Sequence.cpp)
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(n).

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
>[242_Valid_Anagram.py](/python/242_Valid_Anagram.py)
>
> ### C++:
> I compare the length of each string. If they are different lengths, I return False. I created one unordered_map. While iterating through the characters of the strings, I increment the value at the key of the unordered_map for one string, and decrement the value at the key for the other string. Afterwards, I again iterate through the keys of the unordered_map. If the value is ever non-zero, we hve a mismatch, and return False. Otherwise, I return True.  
>[242_Valid_Anagram.cpp](/c++/242_Valid_Anagram.cpp)
>
> ## Time Complexity:
> Time complexity is O(n).
>
> ## Space Complexity:
> Space complexity is O(2n) which is O(n).
>
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