class Min_Stack:

  def __init__(self):
    self.myStack = list()

  def push(self, val: int) -> None:
    if not self.myStack:
      self.myStack.append((val, val))
    else:
      prevMin = self.myStack[-1][-1]
      self.myStack.append((val, min(prevMin, val)))

  def pop(self) -> None:
    self.myStack.pop()

  def top(self) -> int:
    return self.myStack[-1][0]

  def getMin(self) -> int:
    return self.myStack[-1][-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()