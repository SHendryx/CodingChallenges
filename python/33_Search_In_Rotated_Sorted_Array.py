class Search_In_Rotated_Sorted_Array:
  def search(self, nums: list[int], target: int) -> int:
    n = len(nums) - 1
    l = 0
    r = n
    while (l <= r):
      m = (l + r) // 2
      if nums[m] == target:
        return m
      elif nums[m] >= nums[l]:
        if nums[l] <= target <= nums[m]:
          r = m-1
        else:
          l = m+1
      else:
        if nums[r] >= target >= nums[m]:
          l = m+1
        else:
          r = m-1
    return -1