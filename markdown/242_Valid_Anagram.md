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