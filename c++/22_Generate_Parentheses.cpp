#include <vector>
#include <string>

using namespace std;

class Generate_Parentheses {
public:
  vector<char> stack;
  vector<string> res;
  int total;
  int openN;
  int closedN;

  void backtrack(int openN, int closedN) {
    if (openN == closedN && openN == total) {
      string str(stack.begin(), stack.end());
      res.push_back(str);
      return;
    }

    if (openN < total) {
      stack.push_back('(');
      backtrack(openN + 1, closedN);
      stack.pop_back();
    }

    if (closedN < openN) {
      stack.push_back(')');
      backtrack(openN, closedN + 1);
      stack.pop_back();
    }
  };

  vector<string> generateParenthesis(int n) {
    total = n;

    backtrack(0,0);

    return res;
  }
};