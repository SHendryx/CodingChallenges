class Two_Sum:
  def twoSum(self, nums: list[int], target: int) -> list[int]:
    myHash = dict()
    pair = list()
    for indx, val in enumerate(nums):
      if (val in myHash):
        indx2 = myHash[val]
        pair = (indx, indx2)
        return pair
      myHash[target-val] = indx