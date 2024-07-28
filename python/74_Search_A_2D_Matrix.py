class Search_A_2D_Matrix:
  def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
    cols = len(matrix[0])
    rows = len(matrix)
    start = 0
    end = (rows * cols) - 1
    n = (start + end) // 2
    r = n // cols
    c = n % cols
    while (matrix[r][c] != target):
      if (start >= end):
        return False
      if (matrix[r][c] > target):
        end = n - 1
      if (matrix[r][c] < target):
        start = n + 1
      n = (start + end) // 2
      r = n // cols
      c = n % cols
    return True