import collections

class Valid_Sudoku:
  def isValidSudoku(self, board: list[list[str]]) -> bool:
    rows = collections.defaultdict(set)
    cols = collections.defaultdict(set)
    squares = collections.defaultdict(set)
    for r in range(9):
      for c in range(9):
        ch = board[r][c]
        print(ch)
        if ch == '.':
          continue
        if (ch in rows[r] or ch in cols[c] or ch in squares[(r//3,c//3)]):
          return False
        rows[r].add(ch)
        cols[c].add(ch)
        squares[(r//3,c//3)].add(ch)
    return True