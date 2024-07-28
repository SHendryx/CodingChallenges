class Binary_Search:
  def search(self, nums: list[int], target: int) -> int:
    l = 0
    r = len(nums) - 1
    n = (r - l) // 2
    while nums[n] != target:
      if not l < r:
        return -1
      if nums[n] > target:
        r = n - 1
      if nums[n] < target:
        l = n + 1
      n = (l + r) // 2
    return n