#include <set>
#include <vector>

using namespace std;

class Valid_Sudoku {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    set<int> rows[10], cols[10];
    set<int> squares[3][3];

    for (int r = 0; r <= 8; r++) {
      for (int c = 0; c <= 8; c++) {
        char ch = board[r][c];
        if (ch == '.'){
          continue;
        }
        if (rows[r].count(ch) || cols[c].count(ch) || squares[int(r/3)][int(c/3)].count(ch)) {
          return false;
        }
        rows[r].insert(ch);
        cols[c].insert(ch);
        squares[int(r/3)][int(c/3)].insert(ch);
      }
    }
    return true;
  }
};