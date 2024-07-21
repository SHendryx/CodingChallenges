class Car_Fleet:
  def carFleet(self, target: int, position: list[int], speed: list[int]) -> int:
    cars = sorted(list(zip(position, speed)), key = lambda x : x[0])
    stack = []
    for car in cars[::-1]:
      time = (target-car[0]) / car[1]
      if not stack:
        stack.append(time)
      else:
        if time > stack[-1]:
          stack.append(time)
    return len(stack)