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