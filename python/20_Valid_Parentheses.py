class Valid_Parentheses:
  def isValid(self, s: str) -> bool:
    bracketMap = {')': '(', ']': '[', '}': '{'}
    myStack = []
    for c in s:
      if c in bracketMap:
        if not myStack or bracketMap[c] != myStack.pop():
          return False
      else:
        myStack.append(c)
      return not myStack