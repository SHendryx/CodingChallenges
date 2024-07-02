class Valid_Anagram:
    def isAnagram(self, s: str, t: str) -> bool:
        # Time complexity is O(n)
        if len(s) != len(t):
            return False
        countS, countT = {}, {}
        for char in s:
            countS[char] = countS.get(char, 0) + 1
        for char in t:
            countT[char] = countT.get(char, 0) + 1
        for x in countS:
            if countS.get(x) != countT.get(x):
                return False
        return True