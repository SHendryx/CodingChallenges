class Daily_Temperatures:
  def dailyTemperatures(self, temperatures: list[int]) -> list[int]:
    stack = []
    res = [0] * len(temperatures)
    for i, temp in enumerate(temperatures):
      while stack and temp > stack[-1][0]:
        stackT, stackIndex = stack.pop()
        res[stackIndex] = (i - stackIndex)
      stack.append([temp,i])
    return res