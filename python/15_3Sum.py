class ThreeSum:
  def threeSum(self, nums: list[int]) -> list[list[int]]:
    result = []
    nums.sort()
    for i, a in enumerate(nums):
      if i > 0 and a == nums[i-1]:
        continue
      b = i + 1
      c = len(nums) - 1
      while b < c:
        if a + nums[b] + nums[c] < 0:
          b += 1
        elif a + nums[b] + nums[c] > 0:
          c -= 1
        else:
          result.append([a, nums[b], nums[c]])
          b += 1
          while nums[b] == nums[b-1] and b < c:
            b += 1
    return result