class Find_Minimum_In_Rotated_Sorted_Array:
  def findMin(self, nums: list[int]) -> int:
    n = len(nums) - 1
    l = 0
    r = n
    m = (l + r) // 2
    while (l < r):
      if nums[m] > nums[r] :
        l = m + 1
      else:
        r = m
      m = (l + r) // 2
    return nums[m]