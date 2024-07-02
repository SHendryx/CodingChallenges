class Contains_Duplicate:
    def containsDuplicate(self, nums: list[int]) -> bool:
        mySet = set(nums)  # O(n) time complexity
        if len(mySet) == len(nums):
            return False
        else:
            return True