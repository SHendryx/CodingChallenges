class Trapping_Rain_Water:
  def trap(self, height: list[int]) -> int:
    l = 0
    r = len(height) - 1
    maxL = height[l]
    maxR = height[r]
    water = 0
    while l < r:
      if height[l] <= height[r]:
        l += 1
        if height[l] < maxL:
          water += (maxL - height[l])
        else:
          maxL = height[l]
      else:
        r -= 1
        if height[r] < maxR:
          water += (maxR - height[r])
        else:
          maxR = height[r]
    return water