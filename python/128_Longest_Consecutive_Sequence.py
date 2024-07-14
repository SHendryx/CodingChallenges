class Longest_Consecutive_Sequence:
  def longestConsecutive(self, nums: list[int]) -> int:
    myNums = set(nums)
    longest = 0
    for n in nums:
      if (n-1) not in myNums:
        # We found the beginning of the sequence
        length = 0
        while ((n + length) in myNums):
          length += 1
        longest = max(length, longest)
    return longest