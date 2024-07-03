class Product_Of_Array_Except_Self:
  def productExceptSelf(self, nums: list[int]) -> list[int]:
    n = len(nums)
    result = [1] * n
    for i in range(1,n):
      result[i] = nums[i - 1] * result[i - 1]
    product = 1
    for i in range(n - 1, -1, -1):
      result[i] = result[i] * product
      product *= nums[i]
    return result
