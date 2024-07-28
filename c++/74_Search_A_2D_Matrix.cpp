#include <vector>

using namespace std;

class Search_A_2D_Matrix {
public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int start = 0;
    int end = (rows * cols) - 1;
    int n = (start + end) / 2;
    int r = n / cols;
    int c = n % cols;
    while (matrix[r][c] != target) {
      if (start >= end) {
        return false;
      }
      if (matrix[r][c] > target) {
        end = n - 1;
      }
      else {
        start = n + 1;
      }
      n = (start + end) / 2;
      r = n / cols;
      c = n % cols;
    }
    return true;
  }
};