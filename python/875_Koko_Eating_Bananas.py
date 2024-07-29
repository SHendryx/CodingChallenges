from math import ceil

class Koko_Eating_Bananas:
  def minEatingSpeed(self, piles: list[int], h: int) -> int:
    low = 1
    high = max(piles)
    med = int((low + high) / 2)
    while (low < high):
      numHours = 0
      for pile in piles:
        numHours += ceil(pile / med)
      if numHours <= h:
        high = med
      else:
        low = med + 1
      med = int((low + high) / 2)
    return med