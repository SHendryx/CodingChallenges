class Solution:
  def largestRectangleArea(self, heights: list[int]) -> int:
    myStack = []
    maxA = 0
    for i, h in enumerate(heights):
      start = i
      while myStack and myStack[-1][1] > h:
        index, height = myStack.pop()
        maxA = max(maxA, height * (i - index))
        start = index
      myStack.append((start, h))
    
    for i, h in myStack:
      maxA = max(maxA, h * (len(heights) - i))
    return maxA