class Container_With_Most_Water:
  def maxArea(self, height: list[int]) -> int:
    l = 0
    r = len(height) - 1
    maxArea = 0
    maxHeight = max(height)
    while l < r:
      area = min(height[r],height[l]) * (r - l)
      maxArea = max(maxArea,area)
      if maxHeight * (r - l) <= maxArea:
        break
      if height[l] > height[r]:
        r -= 1
      else:
        l += 1
    return maxArea