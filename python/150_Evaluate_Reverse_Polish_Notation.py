class Evaluate_Reverse_Polish_Notation:
  def evalRPN(self, tokens: list[str]) -> int:
    myStack = []
    for x in tokens:
      if x == '*':
        num1 = myStack.pop()
        num2 = myStack.pop()
        myStack.append(num2 * num1)
      elif x == '/':
        num1 = myStack.pop()
        num2 = myStack.pop()
        myStack.append(int(num2 / num1))
      elif x == '+':
        num1 = myStack.pop()
        num2 = myStack.pop()
        myStack.append(num2 + num1)
      elif x == '-':
        num1 = myStack.pop()
        num2 = myStack.pop()
        myStack.append(num2 - num1)
      else:
        myStack.append(int(x))
    return myStack.pop()